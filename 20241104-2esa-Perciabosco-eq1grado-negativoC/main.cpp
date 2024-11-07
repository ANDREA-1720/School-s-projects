/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20241104-2esa-Perciabosco-eq1grado-negativoC"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // Inizializzazione delle variabili
    double coeffA, coeffB, coeffC;

    // acquisizione input
    cout << "Ax+B=C" << endl;
    cout << endl;
    cout << "Inserisci il coefficente A: ";
    cin >> coeffA;
    cout << "Inserisci il coefficente B: ";
    cin >> coeffB;
    cout << "Inserisci il coefficente C: ";
    cin >> coeffC;

    // elaborazione
    if (coeffA != 0)
    {
        cout << "La soluzione dell'equazione è: x = " << (coeffC - coeffB) / coeffA << "." << endl;

        return 0;
    }

    if (coeffC - coeffB != 0)
    {
        cout << "L'equazione è impossibile." << endl;
    }
    else
    {
        cout << "L'equazione è indeterminata." << endl;
    }
    return 0;
}
