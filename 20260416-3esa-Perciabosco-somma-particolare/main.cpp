/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione: "20260416-3esa-Perciabosco-somma-particolare"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int min, max, somma = 0, indice, comodo, comodino;
    bool contiene;
    cout << "Inserisci il numero minimo: " << endl;
    cin >> min;
    cout << "Inserisci il numero massimo: " << endl;
    cin >> max;
    if(min > max){
        max += min;
        min = max - min;
        max -= min;
    }

    cout << "I numeri compresi tra " << min << " e " << max << " che contengono 4 o 7 sono: " << endl;

    for(indice = min; indice <= max; indice++){
        comodo = indice;
        contiene = false;
        while(comodo > 0 && !contiene){
            comodino = comodo % 10;
            if(comodino == 4 || comodino == 7){
                contiene = true;
            }
            comodo = comodo / 10;   
        }
        if(contiene){
            cout << indice << endl;
            somma += indice;
        }
    }

    cout << "La loro somma è: " << somma << "." << endl;

    return 0;
}
