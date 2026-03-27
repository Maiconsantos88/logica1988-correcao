#include<iostream>
#include<iomanip>

int main(){

int a = 8;
float b = 9.6;
double c = 8.695136784;

std::cout<<std::fixed<<std::setprecision(10)<<c<<std::endl;

std::cout<<a<<std::endl;
std::cout<<b<<std::endl;
std::cout<<c<<std::endl;


    return 0;
}