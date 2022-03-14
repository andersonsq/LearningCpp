#include <stdio.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main(){

setlocale(LC_ALL, "Portuguese");

    float numero1, numero2, numero3, numero4;
    float soma, subtracao, multiplicacao, divisao; 
    float media;

    cout << "Digite o primeiro número: " << endl;
    cin >> numero1;
    cout << "Digite o segundo número: " << "\n";
    cin >> numero2;
    cout << "Digite o terceiro número: " << endl;
    cin >> numero3;
    cout << "Digite o quarto número: " << "\n";
    cin >> numero4;

    soma = numero1 + numero2 + numero3 + numero4;
    subtracao = numero1 - numero2 - numero3 - numero4;
    multiplicacao = numero1 * numero2 * numero3 * numero4;
    divisao = numero1 / numero2;
    media = (numero1 + numero2 + numero3 + numero4) / 4;

    cout << "Resultado da soma é: " << soma << endl;
    cout << "Resultado da subtração é: " << subtracao << endl;
    cout << "Resultado da multiplicação é: " << multiplicacao << endl;
    cout << "Resultado da divisão é: " << divisao << endl;
    cout << "Média: " << media << endl;

    return 0;
}