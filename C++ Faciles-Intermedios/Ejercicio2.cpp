#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    float pies, metros;

    cout << "Ingrese la cantidad en pies: ";
    cin >> pies;

    cout << "Ingrese la cantidad en metros: ";
    cin >> metros;

    float pulgadas = pies * 12;
    float yardas = pies / 3;
    float metrosTotal = pies * 0.3048 + metros;
    float millas = metrosTotal / 1609;

    cout << "Suma convertida a pulgadas: " << pulgadas << " pulgadas." << "\n";
    cout << "Suma convertida a yardas: " << yardas << " yardas." << "\n";
    cout << "Suma convertida a metros: " << metrosTotal << " metros." << "\n";
    cout << "Suma convertida a millas: " << millas << " millas.";

    return 0;
}