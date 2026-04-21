#include <iostream>
#include <windows.h>

int main(){ // Função principal onde o programa começa

     SetConsoleOutputCP(CP_UTF8);
     SetConsoleCP(CP_UTF8);

     int num;

     do{
          std::cout << "Digite um valor para num:" <<std::endl;
          std::cin >> num;

          if (num < 1 || num > 10){
               std::cout << "Entrada inválida!!" << std::endl;
          }

     }while (num < 1 || num > 10);
          {
               std::cout << "Obrigado!! Você escolheu o número:" <<num<< std::endl;
          }
     

     return 0;
}