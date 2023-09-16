#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    float num1, num2;
    char operacion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Elija una operacion (+ -> suma, - -> resta, * -> multiplicacion, / -> division): ";
    cin >> operacion;

    float resultado = (operacion == '+') ? (num1 + num2) : (operacion == '-')  
        ? (num1 - num2) : (operacion == '*') 
            ? (num1 * num2) : (operacion == '/') 
                ? ((num2 != 0) ? (num1 / num2) : 0) : 0;

    if (operacion != '+' || '-' || '*' || '/' )
    {
        cout << "Ingrese un operador valido";

    }   else if (operacion == '/' && num2 == 0) {
            cout << "No se puede dividir entre cero";
        }   else {
                cout << "El resultado es: " << resultado;
            }
            
    return 0;
}