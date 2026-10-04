/*
    Autore: Andrea Perciabosco
    Classe: 4ESA
    Descrizione: "20260930-4esa-Perciabosco-libreria-online"
*/

#include <iostream>

using namespace std;

int main()
{
    int indice, pezzi;
    double totale = 0, sconto, spedizione;

    cout << "Inserisci il numero di libri da inserire: " << endl;
    cin >> pezzi;
    pezzi = abs(pezzi);

    double prezzi[pezzi];

    for(indice = 0; indice < pezzi; indice++){
        cout << "Inserisci il prezzo del libro numero " << indice + 1 << ": " << endl;
        cin >> prezzi[indice];
        totale += prezzi[indice];
    }

    cout << "Il totale dei libri e' di " << totale << " euro" << endl;

    if(totale > 50){
        sconto = totale * 0.15;
        spedizione = 0;

        cout << "La spesa supera i 50 euro." << endl;
        cout << "Lo sconto del 15% e' di " << sconto << " euro" << endl;
        cout << "Le spese di spedizione sono gratuite." << endl;

    } else {
        sconto = totale * 0.05;
        spedizione = 5;

        cout << "La spesa non supera i 50 euro." << endl;
        cout << "Lo sconto del 5% e' di " << sconto << " euro" << endl;
        cout << "Le spese di spedizione sono di 5 euro." << endl;
    }

    totale = totale - sconto + spedizione;

    cout << "Il prezzo finale da pagare e' di " << totale << " euro" << endl;

    return 0;
}
