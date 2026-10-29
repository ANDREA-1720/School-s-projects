/*
    Autore: Andrea Perciabosco
    Classe: 4ESA
    Descrizione: "20261027-4esa-Perciabosco-es11"
*/

#include <iostream>

using namespace std;

double calcolaTotale(double produzione[], int giorni)
{
    int indice;
    double totale = 0;

    for(indice = 0; indice < giorni; indice++){
        totale += produzione[indice];
    }

    return totale;
}

int main()
{
    int indice, giorni;
    double totale, media, ricavo, incentivo;

    cout << "Inserisci il numero di giorni monitorati: " << endl;
    cin >> giorni;
    double produzione[giorni];

    for(indice = 0; indice < giorni; indice++){
        cout << "Inserisci i kWh prodotti nel giorno numero " << indice + 1 << ": " << endl;
        cin >> produzione[indice];
    }

    totale = calcolaTotale(produzione, giorni);
    media = totale / giorni;
    ricavo = totale * 0.12;

    if(media > 40){
        incentivo = ricavo * 0.10;
        cout << "La produzione media supera i 40 kWh, quindi l'incentivo e' del 10%." << endl;
    } else {
        incentivo = ricavo * 0.03;
        cout << "La produzione media non supera i 40 kWh, quindi l'incentivo e' del 3%." << endl;
    }

    cout << "Il totale dei kWh prodotti e' di " << totale << " kWh." << endl;
    cout << "La produzione media giornaliera e' di " << media << " kWh." << endl;
    cout << "Il ricavo del periodo e' di " << ricavo << " euro." << endl;
    cout << "L'incentivo e' di " << incentivo << " euro." << endl;

    return 0;
}
