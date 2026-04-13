#include<iostream> // Biblioteca para entrada e saída (cout e cin)

int main(){  // Função principal onde o programa começa

   int idade;

   std::cout<<"Digite sua idade: "<<std::endl;
   std::cin>>idade;

   if(idade >= 18){
    std::cout<<"Voce e maior de idade!"<<std::endl;
   }else{
    std::cout<<"Voce e menor de idade!!"<<std::endl;
   }

    return 0;
}

