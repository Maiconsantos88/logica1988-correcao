#include<iostream>
#include<string>
#include <windows.h>

int main(){ 

     SetConsoleOutputCP(CP_UTF8);
     SetConsoleCP(CP_UTF8);

    std::string nomeCompleto, cpf, estado, matricula;
    std::string cpf , cpfResponsavelFinanceiro
    std::string rua, numeroCasa;
    std::string telefoneAluno, telefoneMae, telefonePai;
    std::string curso;


     
     
     std::cout<<"Digite o nome completo do aluno: "<<std::endl;
     std::getline(std::cin, nomeCompleto);

     std::cout<<"Digite o cpf: "<<std::endl;
     std::getline(std::cin, cpf);

     std::cout<<nomeCompleto<<std::endl;
     std::cout<<cpf<<std::endl;
     


     return 0;

}