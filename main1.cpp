#include <iostream>
#include<string>
#include<windows.h>

int main(){ // Função principal onde o programa começa

     SetConsoleOutputCP(CP_UTF8);
     SetConsoleCP(CP_UTF8);

    std::string nomes[3] = {"joão", "Paula", "Murilo"};
    int idades[3] = {27, 31, 20};
     
     std::cout<<nomes[1]<<" tem "<<idades[1]<<" anos!"<<std::endl;
     std::cout<<nomes[2]<<" tem "<<idades[2]<<" anos!"<<std::endl;

     return 0;
}