/*
    Autore: Andrea Perciabosco
    Classe: 4ESA
    Descrizione: "20260926-4esa-Perciabosco-spedizione"
*/

#include <iostream>

using namespace std;

int main()
{
    int indice;
    double prezzi[3], totale = 0, tmp;

    for(indice = 0; indice < 3; indice++){
        cout << "Inserisci il prezzo dell'articolo numero " << indice + 1 << ": " << endl;
        cin >> prezzi[indice];
        totale += prezzi[indice];
    }

    cout << "Il totale della spesa e' di " << totale << " euro" << endl;

    if(totale > 100){
        cout << "La spesa supera i 100 euro, quindi la spedizione e' gratuita." << endl;
        cout << "Il totale da pagare e' di " << totale << " euro" << endl;
    } else {
        cout << "La spesa non supera i 100 euro, quindi si aggiungono 5 euro di spedizione." << endl;
        cout << "Il totale da pagare e' di " << totale + 5 << " euro" << endl;
    }

    return 0;
}
