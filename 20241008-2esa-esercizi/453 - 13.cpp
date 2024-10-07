/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Indica quale è l'offerta più vantaggiosa tra quella dell'esercizio 12 e quella dell'esercizio 11."
*/

#include <iostream>

using namespace std;

int main()
{
    double num, sconto11, sconto12;

    cout << "Inserisci il numero: ";
    cin >> num;

    if (num > 500)
    {
        sconto11 = num * 0.2;
    }
    else
    {
        sconto11 = num * 0.1;
    }
    if (num > 300)
    {
        sconto12 = 30 + ((num - 300) * 0.2);
    }
    else
    {
        sconto12 = num * 0.1;
    }

    if (sconto11 > sconto12)
        cout << "L'offerta dell'esercizio 11 è più vantaggiosa. (con un risparmio di " << sconto11 - sconto12 << "€)." << endl;
    else if (sconto11 < sconto12)
        cout << "L'offerta dell'esercizio 12 è più vantaggiosa. (con un risparmio di " << sconto12 - sconto11 << "€)." << endl;
    else
        cout << "Le due offerte risultano uguali." << endl;
    return 0;
}