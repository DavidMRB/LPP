#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numero1, numero2, resultado;

    cout << "Suma: Numero 1: ";
    cin >> numero1;
    cout << "Numero 2: ";
    cin >> numero2;

    resultado = numero1 + numero2;
    
    cout << "El resultado de la suma es: " << resultado << endl;
    
    return 0;
}
