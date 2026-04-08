#include<iostream> // Biblioteca para entrada e saída (cout e cin)
#include<cmath>   // Biblioteca para funções matemáticas (sqrt, pow, abs, round, etc.)

int main(){  // Função principal onde o programa começa

    int a = 5;
    int b = 3;
    int c = 5;
    int d = 2;

    int maior1 = std::max(a, b);
    int maior2 = std::max(c, d);

    std::cout<<(maior1 > maior2)<<std::endl;

    return 0;
}

