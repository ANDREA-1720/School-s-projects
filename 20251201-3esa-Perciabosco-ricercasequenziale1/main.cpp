/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione: "20251201-3esa-Perciabosco-ricercasequenziale1"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    int indice/*=0*/, dati, min, max, cerca, trovato = 0;
    cout << "Inserisci la quantità di dati da generare" << endl;
    cin >> dati;
    cout << "Inserisci il valore minimo dei dati da generare" << endl;
    cin >> min;
    cout << "Inserisci il valore massimo dei dati da generare" << endl;
    cin >> max;
    int vetnum[dati];

    dati=abs(dati);
    if(max<min){
        min = min + max;
        max = min - max;
        min = min - max;
    }

    for (indice = 0; indice < dati; indice++) {
        vetnum[indice] = rand() % (max - min + 1) + min;
        cout << "Il valore in posizione " << indice + 1 << " è " << vetnum[indice] << "." << endl;
    }

    cout << "Inserisci il numero da cercare" << endl;
    cin >> cerca;

    for(indice = 0; indice < dati; indice++){
        if(vetnum[indice] == cerca){
            cout << "Il numero " << cerca << " è stato trovato in posizione " << indice +1  << "." << endl;
            trovato = 1;
        }
    }

    if(trovato == 0){
        cout << "Il numero " << cerca << " non è stato trovato nel vettore." << endl;
    }
    return 0;
}
