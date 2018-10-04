#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int intento;
    int correcto;
    int x = 5;
    correcto = 1 + (rand() % 15);
    while (intento != correcto)
    {
        cout << "Adivina el numero" << endl;
        cin >> intento;
        if (intento != correcto)
        {
            cout << "Incorrecto" << endl;
            x--;
            if (x == 0)
            {
                cout << "Perdiste!" << endl;
                return 0;
            }
            cout << "Te quedan " << x << " intentos" << endl;
        }
        else
        {
            cout << "Felicidades, ganaste NADA!" << endl;
        }
    }
    return 0;
}
