#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string nombre;

    cout << "Por Favor Ingresar su nombre ";
    getline(cin, nombre);
    cout << "Bienvenido, " << nombre << endl;

    return 0;
}
