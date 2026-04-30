#include<iostream>
#include <windows.h>

int main(){ 

     SetConsoleOutputCP(CP_UTF8);
     SetConsoleCP(CP_UTF8);

     int num;

     std::cout<<"Digite um valor para num: "<<std::endl;
     std::cin>>num;

     if(num % 2 == 0){
        std::cout<<num<<"É par!"<<std::endl;
    }else{
        std::cout<<num<<"É impar!!"<<std::endl;
    }

     



     return 0;
}