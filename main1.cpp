#include<iostream> // Biblioteca para entrada e saída (cout e cin)
#include<string>  // Biblioteca para usar strings (texto)

int main(){
     // Declaração das variáveis
  
    std::string nome; // variável para armazenar o nome (texto)
    int idade;         // variável para armazenar a idade (número inteiro)
    float altura;       // variável para armazenar a altura (número com casas decimais)
  
    // Solicita o nome do usuário
    std::cout<<"Qual seu nome:"<<std::endl;
    std::cin>>nome;
    std::cout<<"Qual sua idade:"<<std::endl;
    std::cin>>idade;
    std::cout<<"Qual sua altura:"<<std::endl;
    std::cin>>altura;

    std::cout<<"Bem-vindo(a) "<<nome<<"!!"<<std::endl;
    std::cout<<"Sua idade "<<idade<<"anos"<<std::endl;
    std::cout<<"Sua altura "<<altura<<"m. "<<std::endl;
   
    return 0;
}