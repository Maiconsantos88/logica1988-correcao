#include<iostream> // Biblioteca para entrada e saída (cout e cin)
#include<string>   // Biblioteca para trabalhar com textos (string)

int main(){  // Função principal onde o programa começa

   std::string nome = "Maicon";  // Cria uma variável do tipo string com o valor "Maicon"

   std::cout<<nome[0]<<std::endl;  // Mostra a primeira letra (posição 0 → M)
   std::cout<<nome[2]<<std::endl;   // Mostra a terceira letra (posição 2 → i)
   std::cout<<nome[nome.length() -1]<<std::endl;  // Mostra a última letra (n)

   nome[0] = 'A';  // Altera a primeira letra de "Maicon" para 'A' → "Aaicon"

   std::cout<<nome<<std::endl;  // Mostra o nome atualizado → Aaicon

   std::cout<<nome.at(0)<<std::endl;  // Mostra a primeira letra usando método .at()

   nome.at(0) = 'H';  // Altera a primeira letra para 'H' → "Haicon"

   std::cout<<nome;  // Mostra o resultado final → Haicon

 
    return 0;
}

