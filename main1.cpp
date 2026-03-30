#include<iostream> // Biblioteca para entrada e saída (cout e cin)
#include<string>  // Biblioteca para usar strings (texto)

int main(){
    std::string diaDaSemana;

    std::cout<<"Que dia é hoje: "<<std::endl;
    std::cin>>diaDaSemana;

    std::cout<<"Hoje é "<<diaDaSemana<<"!!"<<std::endl;
   
    return 0;
}