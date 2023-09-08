#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char medida;
    float temperatura, celsius, fahrenheit, kelvin;

    cout << "Ingrese una temperatura: ";
    cin >> temperatura;

    cout << "Ingrese el simbolo de la medida (C, F, K): ";
    cin >> medida;

    switch (medida) {
        case 'c':
        case 'C':
            celsius = temperatura;
            fahrenheit = temperatura * 9/5 + 32;
            kelvin = temperatura + 273.15;
            break;
        case 'f':
        case 'F':
            fahrenheit = temperatura;
            celsius = (temperatura - 32) * 5/9;
            kelvin = (temperatura - 32) * 5/9 + 273.15;
            break;
        case 'k':
        case 'K':
            kelvin = temperatura;
            celsius = temperatura - 273.15;
            fahrenheit = (temperatura - 273.15) * 9/5 + 32;
            break;
        default:
            cout << "Medida no válida." << endl;
            return 0;
    }

    cout << "Celsius = " << celsius << endl;
    cout << "Fahrenheit = " << fahrenheit << endl;
    cout << "Kelvin = " << kelvin << endl;
    return 0;
}
