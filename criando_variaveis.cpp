#include <iostream>
#include <locale.h>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    int NumComputadores, SerialComputadores;

    NumComputadores = 100;
    SerialComputadores = 11111;

    cout << "$$$$$$$$$$$$$" << endl;
    cout << "\tNumComputadores = " << NumComputadores << endl;
    cout << "\tSerialComputadores = " << SerialComputadores << endl;
    cout << "$$$$$$$$$$$$$" << endl;

    system("PAUSE");
    return 0;
}