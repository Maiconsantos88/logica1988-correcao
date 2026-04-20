#include <iostream>
#include<string>
#include<windows.h>

int main(){ // Função principal onde o programa começa

     SetConsoleOutputCP(CP_UTF8);
     SetConsoleCP(CP_UTF8);

     std::string carros[5] = {"Volvo", "BMW", "Ford", "Chevrolet", "Fiat"};

     for(int i = 0; i < 5; i++){
          std::cout<<carros[i]<<std::endl;
     }
   
     return 0;
}