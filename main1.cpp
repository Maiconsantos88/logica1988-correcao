#include<iostream>
#include <windows.h>

int main(){ 

     SetConsoleOutputCP(CP_UTF8);
     SetConsoleCP(CP_UTF8);

     int totalSeconds;

     std::cout<<"Enter total seconds: "<<std::endl;
     std::cin>>totalSeconds;

     int minutes = totalSeconds / 60;
     int seconds = totalSeconds % 60;

     std::cout<<"Time: "<<minutes<<" minutes and "<<seconds<<" seconds."<<std::endl;

     

     
     return 0;
}