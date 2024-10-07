/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Applica uno sconto del 10% se il numero è inferiore a 500 euro, e del 20% se è maggiore di 500 euro."
*/

#include <iostream>

using namespace std;

int main()
{
    double num, sconto;

    cout << "Inserisci il numero: ";
    cin >> num;

    if (num > 500)
    {
        sconto = num * 0.2;
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