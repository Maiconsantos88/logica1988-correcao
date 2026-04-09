#include<iostream> // Biblioteca para entrada e saída (cout e cin)
#include<string> 

int main(){  // Função principal onde o programa começa

   std::string user;
   std::string senha;

   std::cout<<"Digite seu usuario de acesso: "<<std::endl;
   std::cin>>user;

   std::cout<<"Digite sua senha: "<<std::endl;
   std::cin>>senha;

   if(senha == "123456789"){
    std::cout<<"O usuario "<<user<<" está logado com sucesso!!"<<std::endl;
   }else{
    std::cout<<"Usuario ou senha invalidos!"<<std::endl;
   }

    return 0;
}

