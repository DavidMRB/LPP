#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    int n, numero1, numero2, primo;

    cout << "Ingrese el primer numero limite ";
    cin >> numero1;
    cout << "Ingresa el segundo numero limite ";
    cin >> numero2;

    for(n = numero1; n <= numero2; n++)
    {
        if(n % 3 == 0)
        {
            primo = n;
            cout << primo << "\n";
        }
    }

    return 0;
}
