#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");  

    bool fezSol, carroPronto, salarioDepositado;
    bool Acesso;

    string senha = "C++";
    string senhaDigitada;

    cout << "Digite a senha de acesso: ";
    cin >> senhaDigitada;

    if (senhaDigitada == senha){
        printf("Senha correta, acesso concedido \n");
        Acesso = true;
    }
    else{
        printf("senha incorreta \n");
    }

//Condições 
fezSol = true;
carroPronto = true;
salarioDepositado = false;
//
    if (Acesso == true && carroPronto == true && salarioDepositado == true){
        cout << "Vai dar praia!! ";
    }
    else{
        cout << "Não vai dar praia";
    }   

    return 0;
}