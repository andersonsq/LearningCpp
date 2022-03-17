#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");  

    int numeroInteiro{12};
    float numeroReal{34.56};
    char caractere{'c'};

    string Texto{"Vou aprender C++"};

    printf("Valor numero inteiro = %d \n", numeroInteiro);
    printf("Valor do float = %.2f \n", numeroReal);
    printf("Valor do char = %c \n", caractere);

    return 0;
}