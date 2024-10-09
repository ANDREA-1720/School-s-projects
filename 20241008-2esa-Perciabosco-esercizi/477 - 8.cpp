/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Calcola uno sconto in base ad un peso in kg."
*/

#include <iostream>

using namespace std;

int main()
{
    double peso, prezzo, sconto;

    cout << "Inserisci il peso in kg: ";
    cin >> peso;
    cout << "Inserisci il prezzo intero in €: ";
    cin >> prezzo;

    if (peso >= 10 && peso < 20)
        sconto = 0.03;
    else if (peso >= 20 && peso < 40)
        sconto = 0.05;
    else if (peso >= 40)
        sconto = 0.10;
    else
    {
        cout << "Inserisci un peso valido!" << endl;
        return 1;
    }

    cout << "Il prezzo scontato è di " << prezzo - sconto << "€ (con un risparmio di " << sconto << "€)." << endl;

    return 0;
}