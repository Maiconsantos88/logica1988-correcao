#include<iostream> // Biblioteca para entrada e saída (cout e cin)
#include<string>

int main(){

   //Solicite ao usuário para ele digitar nome (primeiro nome)
   //Colocar a idade
   //fazer um cáculo para que diga que ano nasceu
   //No final mostre o nome da pessoa.. você nasceu no ano...
   //Vamos tentar SEM IA??

   std::string nome;
   int idade;
   int anoAtual = 2026;
   int anoNascimento;

    std::cout<<"Qual seu nome:"<<std::endl;
    std::cin>>nome;
    std::cout<<"Qual sua idade:"<<std::endl;
    std::cin>>idade;

    anoNascimento = anoAtual - idade;

    std::cout << "Bem-vindo(a), " << nome << ", voce nasceu no ano " << anoNascimento << std::endl;

    
    return 0;
}

