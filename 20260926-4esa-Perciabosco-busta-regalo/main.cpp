/*
    Autore: Andrea Perciabosco
    Classe: 4ESA
    Descrizione: "20260926-4esa-Perciabosco-busta-regalo"
*/

#include <iostream>

using namespace std;

int main()
{
    int indice;
    double prezzi[4], totale = 0;

    for(indice = 0; indice < 4; indice++){
        cout << "Inserisci il prezzo del libro numero " << indice + 1 << ": " << endl;
        cin >> prezzi[indice];
        totale += prezzi[indice];
    }

    cout << "Il totale dei libri e' di " << totale << " euro" << endl;

    if(totale < 30){
        cout << "La spesa e' inferiore ai 30 euro, quindi si aggiungono 2 euro per la busta regalo." << endl;
        cout << "Non si applica nessuno sconto." << endl;
        cout << "Il totale da pagare e' di " << totale + 2 << " euro" << endl;
    } else {
        cout << "La spesa non e' inferiore ai 30 euro, quindi la busta regalo e' gratuita." << endl;
        cout << "Lo sconto del 5% e' di " << totale * 0.05 << " euro" << endl;
        cout << "Il totale da pagare e' di " << totale - totale * 0.05 << " euro" << endl;
    }

    return 0;
}
