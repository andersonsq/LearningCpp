#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");  

    double numero;
    bool MaiorQue100;

    cout << "Digite um número: ";
    cin >> numero;
    cout << "True = 1 e False = 0" << endl;

    MaiorQue100 = (numero > 100);
    
    cout << "O resultado lógico que verifica se o número digitado é maior que 100 é: " << MaiorQue100 << "\n";

    return 0;
}