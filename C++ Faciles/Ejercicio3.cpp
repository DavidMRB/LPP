#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int numero1;
    string resultado;

    cout << "Ingresa el numero: ";
    cin >> numero1;

    resultado = (numero1 % 2 == 0) ? "El numero es par" : "El numero es impar";
    cout << resultado;

    return 0;
}
