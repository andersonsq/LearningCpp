#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

    int numero = 0;

    while (numero <= 50){
        if (numero % 2 == 0){
            cout << numero << endl;
        }          
    numero = numero + 1;         
    }        
    return 0;
}