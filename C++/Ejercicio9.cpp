#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float priPrev, segPrev, terNota, exaFinal, definitiva;

    cout << "Ingrese la nota del primer previo: ";
    cin >> priPrev;
    priPrev *= 0.25;

    cout << "Ingrese la nota del segundo previo: ";
    cin >> segPrev;
    segPrev *= 0.25;

    cout << "Ingrese la tercera nota: ";
    cin >> terNota;
    terNota *= 0.20;

    cout << "Ingrese la nota del examen final: ";
    cin >> exaFinal;
    exaFinal *= 0.30;

    definitiva = priPrev + segPrev + terNota + exaFinal;

    cout << "La nota definitiva es " << definitiva << endl;
    
    return 0;
}
