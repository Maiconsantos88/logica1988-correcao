#include<iostream> // Biblioteca para entrada e saída (cout e cin)


int main(){
   
   int a;
   int b;
   // poderia usar assim também int a, b

   std::cout<<"Digite um valor para A: "<<std::endl;
   std::cin>>a;

   std::cout<<"Digitr um valor para B: "<<std::endl;
   std::cin>>b;

   std::cout<<(a != b)<<std::endl;
   std::cout<<(a == b)<<std::endl;
   
    return 0;
}