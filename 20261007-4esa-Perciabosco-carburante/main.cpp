/*
    Autore: Andrea Perciabosco
    Classe: 4ESA
    Descrizione: "20261007-4esa-Perciabosco-carburante"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int indice, rifornimenti;
    double totaleLitri = 0, incasso, bonus;

    cout << "Inserisci il numero di rifornimenti effettuati: " << endl;
    cin >> rifornimenti;
    double litri[rifornimenti];

    for(indice = 0; indice < rifornimenti; indice++){
        cout << "Inserisci i litri erogati dal rifornimento numero " << indice + 1 << ": " << endl;
        cin >> litri[indice];
        totaleLitri += litri[indice];
    }

    incasso = totaleLitri * 1.85;

    cout << "Il totale dei litri venduti e' di " << totaleLitri << " litri." << endl;
    cout << "L'incasso e' di " << incasso << " euro." << endl;

    if(totaleLitri > 500){
        bonus = incasso * 0.05;
        cout << "Il totale supera i 500 litri, quindi il bonus del gestore e' del 5%." << endl;
    } else {
        bonus = incasso * 0.02;
        cout << "Il totale non supera i 500 litri, quindi il bonus del gestore e' del 2%." << endl;
    }

    cout << "Il bonus e' di " << bonus << " euro." << endl;
    cout << "L'incasso complessivo e' di " << incasso + bonus << " euro." << endl;

    return 0;
}
