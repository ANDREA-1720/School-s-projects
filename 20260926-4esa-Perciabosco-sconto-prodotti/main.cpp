/*
    Autore: Andrea Perciabosco
    Classe: 4ESA
    Descrizione: "20260926-4esa-Perciabosco-sconto-prodotti"
*/

#include <iostream>

using namespace std;

int main()
{
    int indice;
    double prezzi[4], totale = 0;

    for(indice = 0; indice < 4; indice++){
        cout << "Inserisci il prezzo del prodotto numero " << indice + 1 << ": " << endl;
        cin >> prezzi[indice];
        totale += prezzi[indice];
    }

    cout << "Il totale dei prodotti e' di " << totale << " euro" << endl;

    if(totale > 50){
        cout << "Il totale supera i 50 euro, quindi si applica lo sconto del 20%." << endl;
        cout << "Lo sconto e' di " << totale * 0.20 << " euro" << endl;
        cout << "Il totale da pagare e' di " << totale - totale * 0.20 << " euro" << endl;
    } else {
        cout << "Il totale non supera i 50 euro, quindi non si applica nessuno sconto." << endl;
        cout << "Il totale da pagare e' di " << totale << " euro" << endl;
    }

    return 0;
}
