#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>

void exibirModalidade()
{
     std::cout << "\n========= SENAC NH - MATRICULAS =========" << std::endl;
     std::cout << "1 - Cursos Presenciais" << std::endl;
     std::cout << "2 - Cursos EAD" << std::endl;
     std::cout << "3 - Idiomas (Libras)" << std::endl;
     std::cout << "0 - Sair do Sistema" << std::endl;
     std::cout << "=========================================" << std::endl;
}

void exibirPagamento(int &opcaoPagamento)
{
     std::cout << "\n===== FORMAS DE PAGAMENTO =====" << std::endl;
     std::cout << "1 - PIX (15% desconto)" << std::endl;
     std::cout << "2 - VISA (10% desconto e 24x)" << std::endl;
     std::cout << "3 - MASTERCARD (10% desconto e 21x)" << std::endl;
     std::cout << "Escolha uma opcao: ";
     std::cin >> opcaoPagamento;
}

void exibirConvenio(int &opcaoConvenio)
{
     std::cout << "\n===== CONVENIOS E PARCEIROS =====" << std::endl;
     std::cout << "1 - Doctor (+6% desconto)" << std::endl;
     std::cout << "2 - Unimed (+6% desconto)" << std::endl;
     std::cout << "3 - Bourbon (+5% desconto)" << std::endl;
     std::cout << "4 - Vivo (+5% desconto)" << std::endl;
     std::cout << "5 - Sicredi (+5% desconto)" << std::endl;
     std::cout << "0 - Nenhum" << std::endl;
     std::cout << "Escolha uma opcao: ";
     std::cin >> opcaoConvenio;
}

int main()
{
     SetConsoleOutputCP(CP_UTF8);
     SetConsoleCP(CP_UTF8);

     std::cout << std::fixed << std::setprecision(2);

     int modalidade, idade, opcaoPagamento, opcaoConvenio;
     double valorCurso, valorFinal = 0, valorParcela = 0;
     double descontoExtra = 0;

     std::string nomeCompleto, nomeCompletoResponsavelFinanceiro;
     std::string estado, matricula, curso;
     std::string emailAluno, emailResponsavelFinanceiro;
     std::string cpf, cpfResponsavelFinanceiro;
     std::string rgAluno, rgResponsavelFinanceiro;
     std::string enderecoCompletoAluno, enderecoResponsavelFinanceiro;
     std::string cidade, numeroCasa, cepAluno, cepResponsavelFinanceiro;
     std::string contatoAluno, contatoResponsavelFinanceiro;

     exibirModalidade();

     std::cout << "Selecione a modalidade do curso: ";
     std::cin >> modalidade;
     std::cin.ignore();

     if (modalidade == 0)
     {
          std::cout << "Sistema encerrado." << std::endl;
          return 0;
     }

     std::cout << "\nDigite o nome completo do aluno: ";
     std::getline(std::cin, nomeCompleto);

     std::cout << "Digite o CPF do aluno: ";
     std::getline(std::cin, cpf);

     std::cout << "Digite o RG do aluno: ";
     std::getline(std::cin, rgAluno);

     std::cout << "Digite o email do aluno: ";
     std::getline(std::cin, emailAluno);

     std::cout << "Digite o contato do aluno: ";
     std::getline(std::cin, contatoAluno);

     std::cout << "Digite o endereco completo do aluno: ";
     std::getline(std::cin, enderecoCompletoAluno);

      std::cout << "Digite cidade: ";
     std::getline(std::cin, cidade);

     std::cout << "Digite o numero da casa: ";
     std::getline(std::cin, numeroCasa);

     std::cout << "Digite o CEP do aluno: ";
     std::getline(std::cin, cepAluno);

     std::cout << "Digite o estado: ";
     std::getline(std::cin, estado);

     std::cout << "Digite a matricula do aluno: ";
     std::getline(std::cin, matricula);

     std::cout << "Digite a idade do aluno: ";
     std::cin >> idade;
     std::cin.ignore();

     if (idade < 18)
     {
          std::cout << "\n===== RESPONSAVEL FINANCEIRO =====" << std::endl;

          std::cout << "Digite o nome completo do responsavel financeiro: ";
          std::getline(std::cin, nomeCompletoResponsavelFinanceiro);

          std::cout << "Digite o CPF do responsavel financeiro: ";
          std::getline(std::cin, cpfResponsavelFinanceiro);

          std::cout << "Digite o RG do responsavel financeiro: ";
          std::getline(std::cin, rgResponsavelFinanceiro);

          std::cout << "Digite o email do responsavel financeiro: ";
          std::getline(std::cin, emailResponsavelFinanceiro);

          std::cout << "Digite o contato do responsavel financeiro: ";
          std::getline(std::cin, contatoResponsavelFinanceiro);

          std::cout << "Digite o endereco do responsavel financeiro: ";
          std::getline(std::cin, enderecoResponsavelFinanceiro);

          std::cout << "Digite o CEP do responsavel financeiro: ";
          std::getline(std::cin, cepResponsavelFinanceiro);
     }

     std::cout << "\nDigite o curso desejado: ";
     std::getline(std::cin, curso);

     std::cout << "Digite o valor do curso: R$ ";
     std::cin >> valorCurso;

     exibirPagamento(opcaoPagamento);

     switch (opcaoPagamento)
     {
     case 1:
          valorFinal = valorCurso * 0.85;
          break;

     case 2:
          valorFinal = valorCurso * 0.90;
          valorParcela = valorFinal / 24;
          break;

     case 3:
          valorFinal = valorCurso * 0.90;
          valorParcela = valorFinal / 21;
          break;

     default:
          std::cout << "Opcao de pagamento invalida!" << std::endl;
          return 0;
     }

     exibirConvenio(opcaoConvenio);

     switch (opcaoConvenio)
     {
     case 1:
     case 2:
          descontoExtra = 0.06;
          break;

     case 3:
     case 4:
     case 5:
          descontoExtra = 0.05;
          break;

     case 0:
          descontoExtra = 0;
          break;

     default:
          std::cout << "Opcao de convenio invalida!" << std::endl;
          return 0;
     }

     valorFinal = valorFinal - (valorFinal * descontoExtra);

     if (opcaoPagamento == 2)
     {
          valorParcela = valorFinal / 24;
     }
     else if (opcaoPagamento == 3)
     {
          valorParcela = valorFinal / 21;
     }

     std::cout << "\n========== DADOS DA MATRICULA ==========" << std::endl;
     std::cout << "Nome: " << nomeCompleto << std::endl;
     std::cout << "CPF: " << cpf << std::endl;
     std::cout << "RG: " << rgAluno << std::endl;
     std::cout << "Email: " << emailAluno << std::endl;
     std::cout << "Contato: " << contatoAluno << std::endl;
     std::cout << "Endereco: " << enderecoCompletoAluno << ", " << numeroCasa << std::endl;
     std::cout << "CEP: " << cepAluno << std::endl;
     std::cout << "Estado: " << estado << std::endl;
     std::cout << "Matricula: " << matricula << std::endl;
     std::cout << "Idade: " << idade << std::endl;
     std::cout << "Curso: " << curso << std::endl;

     if (idade < 18)
     {
          std::cout << "\n===== RESPONSAVEL FINANCEIRO =====" << std::endl;
          std::cout << "Nome: " << nomeCompletoResponsavelFinanceiro << std::endl;
          std::cout << "CPF: " << cpfResponsavelFinanceiro << std::endl;
          std::cout << "RG: " << rgResponsavelFinanceiro << std::endl;
          std::cout << "Email: " << emailResponsavelFinanceiro << std::endl;
          std::cout << "Contato: " << contatoResponsavelFinanceiro << std::endl;
          std::cout << "Endereco: " << enderecoResponsavelFinanceiro << std::endl;
          std::cout << "CEP: " << cepResponsavelFinanceiro << std::endl;
     }

     std::cout << "\n===== PAGAMENTO =====" << std::endl;
     std::cout << "Valor original: R$ " << valorCurso << std::endl;
     std::cout << "Valor final com descontos: R$ " << valorFinal << std::endl;

     if (opcaoPagamento == 1)
     {
          std::cout << "Pagamento via PIX." << std::endl;
     }
     else if (opcaoPagamento == 2)
     {
          std::cout << "Pagamento via VISA." << std::endl;
          std::cout << "Parcelamento: 24x de R$ " << valorParcela << std::endl;
     }
     else if (opcaoPagamento == 3)
     {
          std::cout << "Pagamento via MASTERCARD." << std::endl;
          std::cout << "Parcelamento: 21x de R$ " << valorParcela << std::endl;
     }

     std::cout << "\nAluno cadastrado com sucesso!" << std::endl;

     return 0;
}