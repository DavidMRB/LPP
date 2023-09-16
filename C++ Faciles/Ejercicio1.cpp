#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float centimetro, pulgada;

    cout << "Ingrese los centimetros a convertir: " << "\n";
    cin >> centimetro;

    pulgada = centimetro * 0.393701;

    cout << "Son " << pulgada << " pulgadas.";

    return 0;
}
