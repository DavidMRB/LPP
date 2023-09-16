#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> distancias = {50, 55, 57, 58, 60};
    vector<int> pueblosElegidos;

    int millasTotales = 174, numPueblos = 3, millasRecorridas = 0;

    sort(distancias.rbegin(), distancias.rend());

    for (int distancia : distancias) {
        if (numPueblos > 0 && millasRecorridas + distancia <= millasTotales) {
            pueblosElegidos.push_back(distancia);
            millasRecorridas += distancia;
            numPueblos--;
        }
    }

    cout << "Pueblos elegidos: ";
    for (int pueblo : pueblosElegidos) {
        cout << pueblo << " ";
    }

    cout << "\n";
    cout << "La suma de las distancias de las ciudades es: " << millasRecorridas;

    return 0;
} 