#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int numHijos, edad, estadoCivil;
    float pagoMensual = 0.0;

    cout << "Ingrese el numero de hijos en el hogar: ";
    cin >> numHijos;

    if (numHijos <= 2) {
        pagoMensual += 70.0;
    } else if (numHijos <= 5) {
         pagoMensual += 90.0;
        } else {
            pagoMensual += 120.0;
            }

    for (int i = 1; i <= numHijos; i++) {
        cout << "Ingrese la edad del hijo " << i << ": ";
        cin >> edad;
        if (edad >= 6 && edad <= 18) {
            pagoMensual += 10.0;
        }
    }

    cout << "La madre de familia es viuda? (1 para si, 0 para no): ";
    cin >> estadoCivil;
    if (estadoCivil == 1) {
        pagoMensual += 20.0;
    }

    cout << "El pago mensual que recibira la familia es: S/. " << pagoMensual;

    return 0;
}
