#include<iostream> // Biblioteca para entrada e saída (cout e cin)
#include<string>

int main(){

   std::string nome = "Maicon";

   std::cout<<nome[0]<<std::endl;
   std::cout<<nome[2]<<std::endl;
   std::cout<<nome[nome.length() -1]<<std::endl;
   nome[0] = 'A';
   std::cout<<nome<<std::endl;

      
    return 0;
}

