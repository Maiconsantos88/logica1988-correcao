#include <iostream>
#include<string>
#include<windows.h>

int main(){ // Função principal onde o programa começa

     SetConsoleOutputCP(CP_UTF8);
     SetConsoleCP(CP_UTF8);

     std::string letras[2][4] = {
          {"A", "B", "C", "D"},
          {"E", "F", "G", "H"}
     };

     std::cout<<letras[1][0]<<std::endl;
    
   
     return 0;
}