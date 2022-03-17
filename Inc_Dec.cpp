#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");  

    int num1{10}, num2{20}, resultado;    

    cout << "Valor atual de num1 = " << num1 << " e num2 = " << num2 << endl;
    num1 = num2++;
    cout << "Novo valor atual de num1 = " << num1 << " e num2 = " << num2 << endl;

    return 0;
}