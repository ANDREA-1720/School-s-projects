/*
    Autore: Andrea Perciabosco
    Classe: 4ESA
    Descrizione: "20260926-4esa-Perciabosco-conto-ristorante"
*/

#include <iostream>

using namespace std;

int main()
{
    int indice;
    double prezzi[5], totale = 0;

    for(indice = 0; indice < 5; indice++){
        cout << "Inserisci il prezzo del piatto numero " << indice + 1 << ": " << endl;
        cin >> prezzi[indice];
        totale += prezzi[indice];
    }

    cout << "Il totale dei piatti e' di " << totale << " euro" << endl;
    cout << "La mancia del 10% e' di " << totale * 0.10 << " euro" << endl;
    cout << "Il totale del conto e' di " << totale + totale * 0.10 << " euro" << endl;

    return 0;
}
