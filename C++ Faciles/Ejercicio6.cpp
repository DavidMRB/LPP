#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<bool> ovejas;
    int cantOvejas, presentes;
    string error;

    cout << "Ingrese el numero de ovejas: ";
    cin >> cantOvejas;

    cout << "Ingrese cuantas ovejas hay presentes: ";
    cin >> presentes;

     if (presentes > cantOvejas) {
        cout << "Error, cantidades no relacionables." << "\n";
        return 1;
    }

    for (int c = 0; c < presentes; c++) {
        ovejas.push_back(true);
    }

    for (int c = presentes; c < cantOvejas; c++) {
        ovejas.push_back(false);
    }

    random_device rd;
    mt19937 g(rd());
    shuffle(ovejas.begin(), ovejas.end(), g);

    cout << "Se detectaron " << presentes << " ovejas presentes: (";
    for (int c = 0; c < cantOvejas; c++) {
        cout << (ovejas[c] ? "true" : "false");
        if (c < cantOvejas - 1) {
            cout << ", ";
        }
    }
    cout << ")";

    return 0;
}
