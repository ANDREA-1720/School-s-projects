/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione: "20251201-3esa-Perciabosco-ricercasequenziale2"
*/

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    int indice/*=0*/, indice2, dati, min, max, cerca, trovato = 0, comodo, duplicato;
    cout << "Inserisci la quantità di dati da generare" << endl;
    cin >> dati;
    do{
        cout << "Inserisci il valore minimo dei dati da generare" << endl;
        cin >> min;
        cout << "Inserisci il valore massimo dei dati da generare" << endl;
        cin >> max;
        if(abs(max-min) < dati){
        cout<<"Intervallo non valido, non è abbastanza grade per riempire il vettore con soli numeri distinti." << endl;
        }
    } while(abs(max-min) < dati);
    int vetnum[dati];

    dati=abs(dati);
    if(max<min){
        min = min + max;
        max = min - max;
        min = min - max;
    }

    for (indice = 0; indice < dati; indice++) { // while(indice < dati){
        duplicato = 0;
        comodo = rand() % (max - min + 1) + min;
        for(indice2 = 0; indice2 < indice; indice2++){
        if(vetnum[indice] == vetnum[indice2]){
            duplicato = 1;
            indice2 = indice;
        }
        }

        if(duplicato != 0){
        indice--;
        } else {
        vetnum[indice] = comodo;
        cout << "Il valore in posizione " << indice + 1 << " è " << vetnum[indice] << "." << endl;
        }
    }

    cout << "Inserisci il numero da cercare" << endl;
    cin >> cerca;

    for(indice = 0; indice < dati; indice++){
        if(vetnum[indice] == cerca){
            cout << "Il numero " << cerca << " è stato trovato in posizione " << indice + 1 << "." << endl;
            indice = dati;
            indice = dati;
        }
    }
    return 0;
}
