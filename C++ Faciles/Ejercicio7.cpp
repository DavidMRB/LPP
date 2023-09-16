#include <iostream>
using namespace std;

float potencia(float numero, int exponente) 
{

    if (exponente < 0) {
        return 1.0 / potencia(numero, -exponente);
    } else if (exponente == 0) {
        return 1.0;
    } else {
        float resultado = 1.0;
        for (int i = 0; i < exponente; i++) {
            resultado *= numero;
        }
        return resultado;
    }
}

int main(int argc, char const *argv[])
{

    float numero;
    int exponente;

    cout << "Ingrese el numero a elevar: ";
    cin >> numero;

    cout << "Ingrese el exponente al que va a ser elevado: ";
    cin >> exponente;

    float resultado = potencia(numero, exponente);

    cout << numero << " elevado a la potencia " << exponente << " es igual a " << resultado;

    return 0;
}
