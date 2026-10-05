/*
    Autore: Andrea Perciabosco
    Classe: 4ESA
    Descrizione: "20261005-4esa-Perciabosco-sconti"
*/

#include <iostream>
using namespace std;

int main() {
    int pezzi;
    double tot = 0;

    cout << "Inserisci il numero di capi acqusitati";
    cin >> pezzi;
    double capi[pezzi];

    for(int i = 0; i < pezzi; i++){
        cout << "Inserisci il prezzo del capo n°" << i + 1 << ": " << endl;
        cin >> capi[i];
        tot += capi[i];
    }

    if(tot > 70) tot *= 0.6;
        else if(tot > 50) tot = tot * 0.7 + 5;
            else if(tot > 30) tot = tot * 0.93 + 5;

    cout << "Il prezzo totale è " << tot << "." << endl;
    
    return 0;
}