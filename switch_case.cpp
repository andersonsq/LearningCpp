#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;
    char operacao;

    cout << "\nEntre com um numero: ";
    cin >> num1;
    cout << "\nEntre com outro numero: ";
    cin >> num2;

    cout << "\nQue operação deseja eferura?" << endl;
    cout << "+ Adição? " << endl;
    cout << "- Subtração? " << endl;
    cout << "* Multiplicação? " << endl;
    cout << "/ Divisão? " << endl;
    cin >> operacao;

    
    switch (operacao){
        case '+':
            cout << "Adição de ambos número é: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Subtração de ambos número é: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Multiplicação de ambos número é: " << num1 * num2 << endl;
            break;
        case '/':
            cout << "Divisão de ambos número é: " << num1 / num2 << endl;
            break;       
        default:
            cout << "Operador inválido" << endl;
            break;
    }

    return 0;
}