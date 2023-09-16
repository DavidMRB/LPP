#include <iostream>
using namespace std;

bool primo(int numero) {
    return (numero <= 1) ? false : (numero == 2 || (numero % 2 != 0 && numero % 3 != 0));
}

int main(int argc, char const *argv[])
{
    
    int numero;

    cout << "Ingresa el numero: ";
    cin >> numero;

    bool resultado = primo(numero);

    cout << numero << (resultado ? " es primo" : " no es primo.");

    return 0;
}