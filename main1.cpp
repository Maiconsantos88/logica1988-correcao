#include <iostream>
#include<string>
#include<windows.h>

int main(){ // Função principal onde o programa começa

     SetConsoleOutputCP(CP_UTF8);
     SetConsoleCP(CP_UTF8);

     int numeros[5] = {10, 20, 30, 40, 50};

     int tamanho = std::size(numeros);

     for(int i = 0; i < tamanho; i++){
          std::cout<<numeros[i]<<std::endl;
     }
   
     return 0;
}