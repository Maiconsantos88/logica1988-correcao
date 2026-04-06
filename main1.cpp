#include<iostream> // Biblioteca para entrada e saída (cout e cin)
#include<string>

int main(){

    std::string nome;
    std::string sobrenome = " Barreto";

    std::cout<<"Digite seu nome: "<<std::endl;
    std::cin>>nome;

    std::cout<<nome.append(sobrenome);
   
    return 0;
}

