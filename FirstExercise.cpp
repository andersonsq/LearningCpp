#include <stdio.h>
#include <iostream>
#include <locale.h>     //biblioteca local

using namespace std;

/*
- Anderson Siqueira de Andrade
- 22/02/2022
*/

int main(){
    setlocale(LC_ALL, "Portuguese");    //setar para poder utilizar characeres portugueses e acentos
    
    cout << "Vou aprender a programar na linguagem C++" << endl;
    printf("Vou \naprender a \nprogramar na \nlinguagem C++\n");
    
    return 0;
}