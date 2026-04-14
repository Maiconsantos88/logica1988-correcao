#include<iostream>
#include<string>

int main(){  // Função principal onde o programa começa

   std::string nome;
   float altura;
   int idade;

   std::cout<<"Digite seu nome: "<<std::endl;
   std::cin>>nome;

   std::cout<<"Digite sua altura: "<<std::endl;
   std::cin>>altura;

   std::cout<<"Digite sua idade: "<<std::endl;
   std::cin>>idade;

   if(idade < 0){
        std::cout<<"Voce disgitou um valor invalido para uma idade!"<<std::endl;
   }else if(idade <= 10){
        std::cout<<"Voce e uma crianca!"<<std::endl;
   }else if(idade <= 18){
        std::cout<<"voce e um(a) adolescente!"<<std::endl;
   }else if(idade <= 60){
        std::cout<<"voce e adulto(a)!"<<std::endl;
   }else{
        std::cout<<"voce e um(a) senior!"<<std::endl;
   }


    return 0;
}