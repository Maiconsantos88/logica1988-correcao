#include <iostream>
#include<string>
#include<windows.h>

int main(){ // Função principal onde o programa começa

     SetConsoleOutputCP(CP_UTF8);
     SetConsoleCP(CP_UTF8);

     std::string carros[5] = {"Volvo", "BMW", "Ford", "Chevrolet", "Fiat"};

     int tamanho = sizeof(carros) / sizeof(carros[0]);

     std::cout<<tamanho<<std::endl;
   
     return 0;
}