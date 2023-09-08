#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int cont;
    cont = 0;

    while(cont < 100)
    {
        cont = ++cont;
        cout << cont << endl;
    }

    return 0;
}
