#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int cont, limit;
    cont = 0;

    cout << "Ingrese un numero limite ";
    cin >> limit;

    while(cont < limit)
    {
        cont = ++cont;
        cout << cont << endl;
    }

    return 0;
}
