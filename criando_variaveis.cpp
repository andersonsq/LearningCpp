#include <iostream>
#include <locale.h>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    int NumComputadores, SerialComputadores;
    int Num;
    float Num2;
    char charactere = '3';
    char charactere2 = 'k';

    NumComputadores = 100;
    SerialComputadores = 11111;

    cout << "$$$$$$$$$$$$$" << endl;
    
    cout << "\tNumComputadores = " << NumComputadores << endl;
    cout << "\tSerialComputadores = " << SerialComputadores << endl;
    
    
    cout << "\tTamanho da variavel Num = " << sizeof(Num) << "bytes" << endl;
    cout << "\tTamanho da variavel Num2 = " << sizeof(Num2) << "bytes" << endl;
    
    cout << "\tTamanho da variavel charactere = " << sizeof(charactere) << endl;
    cout << "\tTamanho da variavel charactere2 = " << sizeof(charactere2) << endl;
        
    cout << "$$$$$$$$$$$$$" << endl;

    return 0;
}