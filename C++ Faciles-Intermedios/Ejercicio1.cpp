#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int minAtlet1, segAtlet1, minAtlet2, segAtlet2;

    cout << "Ingrese los minutos del primer atleta: ";
    cin >> minAtlet1;
    cout << "Ingrese los segundos del atleta: ";
    cin >> segAtlet1;

    cout << "Ingrese los minutos del segundo atleta: ";
    cin >> minAtlet2;
    cout << "Ingrese los segundos del segundo atleta: ";
    cin >> segAtlet2;

    int tiempoTotalSegundos = (minAtlet1 * 60 + segAtlet1) + (minAtlet2 * 60 + segAtlet2);

    int horas = tiempoTotalSegundos / 3600;
    int minutos = (tiempoTotalSegundos % 3600) / 60;
    int segundos = tiempoTotalSegundos % 60;

    cout << "Tiempo total: " << horas << ":" << minutos << ":" << segundos;

    return 0;
}
