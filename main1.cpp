#include<iostream>
#include<iomanip>

int main(){

    int num1 = 8;
    int num2 = 2;
    int soma, sub, mult, div;

   soma = num1 + num2;
   sub = num1 - num2;
   mult = num1 * num2;
   div = num1 / num2;

    std::cout<<soma<<std::endl;
    std::cout<<sub<<std::endl;
    std::cout<<mult<<std::endl;
    std::cout<<div<<std::endl;

    return 0;
}