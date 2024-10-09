/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Calcola uno sconto in base ad una fascia in base ad un numero di tessera."
*/

#include <iostream>

using namespace std;

int main()
{
    int tessera;
    double prezzo, litri, sconto;

    cout << "Inserisci il numero di tessera: ";
    cin >> tessera;
    cout << "Inserisci il prezzo in €/l: ";
    cin >> prezzo;
    cout << "Inserisci il numero di litri: ";
    cin >> litri;

    if (tessera >= 10000 && tessera <= 19000)
        sconto = 0.10;
    else if (tessera >= 20000 && tessera <= 29000)
        sconto = 0.08;
    else if (tessera >= 30000 && tessera <= 39000)
        sconto = 0.06;
    else if (tessera >= 40000 && tessera <= 49000)
        sconto = 0.04;
    else
    {
        cout << "Inserisci un numero di tessera valido!" << endl;
        return 1;
    }

    sconto = sconto * litri * prezzo;

    cout << "Il prezzo scontato è di " << (litri * prezzo) - sconto << "€ (con un risparmio di " << sconto << "€)." << endl;

    return 0;
}