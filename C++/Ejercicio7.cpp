#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float libras, kilos, gramos;

    cout << "Ingresa el peso en libras ";
    cin >> libras;

    kilos = libras * 0.453592;
    gramos = libras * 453.592;

    cout << "La cantidad de " << libras << " libras en gramos es: " << gramos << " y en kilos seria: " << kilos << endl;

    return 0;
}
