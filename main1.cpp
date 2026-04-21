#include <iostream>
#include <windows.h>

int main()
{ // Função principal onde o programa começa

     SetConsoleOutputCP(CP_UTF8);
     SetConsoleCP(CP_UTF8);

     int contagem = 10;

     while (contagem > 0){
          std::cout<<contagem<<std::endl;
          contagem--;
     }

     std::cout<<"Feliz ano novo!!"<<std::endl;

     return 0;
}