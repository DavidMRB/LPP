#include <iostream>
using namespace std;

unsigned long long calFactorial(int numero) 
{
    if (numero < 0) 
    {
        return 0;
    }
    
    unsigned long long resultado = 1;
    
    for (int i = 1; i <= numero; i++) 
    {
        resultado *= i;
    }
    
    return resultado;
}

int main(int argc, char const *argv[]) 
{
    
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    unsigned long long resultado = calFactorial(numero);

    cout << "El factorial de " << numero << " es " << resultado;

    return 0;
}
