#include <iostream>
#include <windows.h>

int main(){ // Função principal onde o programa começa

     SetConsoleOutputCP(CP_UTF8);
     SetConsoleCP(CP_UTF8);

     int quantidade;

     do{
          std::cout<<"Digite a quantidade em estoque (Deve ser maior que 0): "<<std::endl;
          std::cin>>quantidade;
     }
     while(quantidade <= 0);
     std::cout<<"Estoque atualizado: "<<quantidade<<" unidades."<<std::endl;


     return 0;
}