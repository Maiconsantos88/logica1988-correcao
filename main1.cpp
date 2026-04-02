#include<iostream> // Biblioteca para entrada e saída (cout e cin)


int main(){

    int num1, num2, soma;

    std::cout<<"Digite num 1: "<<"\n";
    std::cin>>num1;

    std::cout<<"Digite num 2: "<<"\n";
    std::cin>>num2;

    soma = num1 + num2;

    std::cout<<"O resultado da soma é "<<soma<<"\n";

    //New Line: Apenas insere o caractere de nova linha.
    //É como apertar o enter em umeditor de texto. O computador
    //guarda essa informação em um espaço temporário (chamado buffer) e só mostra
    //na tela quando esse espaço enche ou o programa acaba.

    // std::endl Insere a nova linha e força o esvaziamento do buffer (operação chama de flush). Ele
    // obriga o computador a exibir tudo o que está guardado na memória imediatamente na tela.


    return 0;
}

