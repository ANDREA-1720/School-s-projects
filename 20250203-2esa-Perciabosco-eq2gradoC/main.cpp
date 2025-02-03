/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250203-2esa-Perciabosco-eq2gradoC"
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double coefA, coefB, coefC, delta, sqrtDelta, sol1, sol2;

    cout << "Ax^2 + Bx + C = 0" << endl;
    cout << endl;
    cout << "Inserisci il coefficiente A: ";
    cin >> coefA;
    cout << "Inserisci il coefficiente B: ";
    cin >> coefB;
    cout << "Inserisci il coefficiente C: ";
    cin >> coefC;

    if (coefA == 0)
    {
        sol1 = -coefC / coefB;
        cout << "L'equazione è di primo grado. La soluzione è X = " << sol1 << endl;
    }
    else
    {
        delta = coefB * coefB - 4 * coefA * coefC;

        if (delta < 0)
        {
            cout << "L'equazione di secondo grado è impossibile nel campo dei numeri reali." << endl;
        }
        else
        {
            sqrtDelta = sqrt(delta);
            sol1 = (-coefB + sqrtDelta) / (2 * coefA);
            sol2 = (-coefB - sqrtDelta) / (2 * coefA);

            if (sol1 == sol2)
            {
                cout << "L'equazione ha 2 soluzioni reali e coincidenti: X = " << sol1 << endl;
            }
            else
            {
                cout << "L'equazione ha 2 soluzioni reali e distinte: X1 = " << sol1 << " e X2 = " << sol2 << endl;
            }
        }
    }

    return 0;
}
