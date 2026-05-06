#include <iostream>
#include <string>
#include <windows.h>

void exibirModalidade(){
     std::cout<<"\n========== SENAC NH - MATRICULAS =========="<<std::endl;
     std::cout<<"1 - Cursos presenciais"<<std::endl;
     std::cout<<"2 - Cursos EAD"<<std::endl;
     std::cout<<"3 - Idiomas (Libras)"<<std::endl;
     std::cout<<"0 - Sair do Sistema"<<std::endl;
     std::cout<<"Selecione a modalidade do curso: "<<std::endl;
}

int main()
{
     SetConsoleOutputCP(CP_UTF8);
     SetConsoleCP(CP_UTF8);

     int modalidade = -1;

     exibirModalidade();
     modalidade;

     

     std::string nomeCompleto, nomeCompletoResponsavelFinaceiro, estado, matricula;
     std::string emailAluno, emailResponsavelFinanceiro;
     std::string cpf, cpfResponsavelFinanceiro;
     std::string rgAluno, rgResponsavelFinanceiro;
     std::string enderecoCompletoAluno, enderecoResponsavelFinaceiro, numeroCasa, cepAluno, cepResponsavelFinaceiro;
     std::string contatoAluno, contatoResponsavelFinaceiro;
     std::string curso;
     int idade;
     double valorCurso, valorFinal, valorParcela;
     int opcaoPagamento;

     std::cout << "Digite o nome completo do aluno: " << std::endl;
     std::getline(std::cin, nomeCompleto);

     std::cout << "Digite o cpf: " << std::endl;
     std::getline(std::cin, cpf);

     std::cout << nomeCompleto << std::endl;
     std::cout << cpf << std::endl;

     return 0;
}