/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Presi due prezzi, sconta al 50% quello con il prezzo minore."
*/

#include <iostream>

using namespace std;

int main()
{
    double num1, num2, sconto;

    cout << "Inserisci il primo numero: ";
    cin >> num1;
    cout << "Inserisci il secondo numero: ";
    cin >> num2;

    if (num1 < num2)
    {
        sconto = num1 * 0.5;
    }
    else
    {
        sconto = num2 * 0.5;
    }

    cout << "Il prezzo scontato è: " << num1 + num2 - sconto << "€ (con un sconto di " << sconto << "€)." << endl;

    return 0;
}