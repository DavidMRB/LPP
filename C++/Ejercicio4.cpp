#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int edad;

    cout << "Ingresa tu edad ";
    cin >> edad;
    cout << (edad < 18 ? "Eres menor de edad" : "Eres mayor de edad");

    return 0;
}
