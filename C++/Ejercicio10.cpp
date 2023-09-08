#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, cantNotas;
    float nota, promedio, equivalencia;
    promedio = 0;

    cout << "Cuantas notas va a ingresar: ";
    cin >> cantNotas;

    for (n = 1; n <= cantNotas; n++) {
        cout << "Ingrese la nota " << n << ": ";
        cin >> nota;
        promedio += nota;
    }

    promedio /= cantNotas;
    equivalencia = promedio * 0.2;

    cout << "El promedio del estudiante es " << promedio << endl;
    cout << "La equivalencia a la tercera nota es " << equivalencia << endl;
    return 0;
}
