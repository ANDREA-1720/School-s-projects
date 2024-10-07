/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Applica uno sconto del 10% sui primi 300 euro, e del 20% sul resto."
*/

#include <iostream>

using namespace std;

int main()
{
    double num, sconto;

    cout << "Inserisci il numero: ";
    cin >> num;

    if (num > 300)
    {
        sconto = 30 + ((num - 300) * 0.2);
        num = num - sconto;
    }
    else
    {
        sconto = num * 0.1;
        num = num - sconto;
    }

    cout << "Il prezzo scontato è: " << num << "€ (con un sconto di " << sconto << "€)." << endl;
    return 0;
}