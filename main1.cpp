#include <iostream>
#include<windows.h>

int main(){ // Função principal onde o programa começa

     SetConsoleOutputCP(CP_UTF8);
     SetConsoleCP(CP_UTF8);

     int soma = 0;

     for(int i = 1; i <= 5; i++){
          soma = soma + i;
     }

    std::cout<<"Soma é: "<<soma<<std::endl;
    
     return 0;
}