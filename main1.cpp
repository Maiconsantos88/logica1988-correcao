#include <iostream>
#include<vector>
#include <windows.h>

int main(){ 

     SetConsoleOutputCP(CP_UTF8);
     SetConsoleCP(CP_UTF8);

     std::vector<std::string>cars = {"Volvo", "BMW", "Mercedes"};

     cars.push_back("Mazda");

     for(std::string car : cars){
          std::cout<<car<<std::endl;
     }

    

     return 0;
}