#include <iostream>
#include<thread>
#include<chrono>
#include<windows.h>

int main(){ // Função principal onde o programa começa

     SetConsoleOutputCP(CP_UTF8);
     SetConsoleCP(CP_UTF8);

     for(int i = 10; i >= 0; i--){
          std::cout<<"A bomba irá explodir em.."<<i<<std::endl;
          std::this_thread::sleep_for(std::chrono::milliseconds(500));
     }


     

     return 0;
}