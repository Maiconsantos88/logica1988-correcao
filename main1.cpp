#include<iostream> // Biblioteca para entrada e saída (cout e cin)

int main(){  // Função principal onde o programa começa

   int idade;

   std::cout<<"Digite sua idade: "<<std::endl;
   std::cin>>idade;

   if(idade < 0){
    std::cout<<"Idade invalida!"<<std::endl;
   }else if(idade <= 2){
    std::cout<<"Voce e um bebe!"<<std::endl;
   }

    return 0;
}

