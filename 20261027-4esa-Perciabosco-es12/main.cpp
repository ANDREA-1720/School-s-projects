/*
    Autore: Andrea Perciabosco
    Classe: 4ESA
    Descrizione: "20261027-4esa-Perciabosco-es12"
*/

#include <iostream>

using namespace std;

int calcolaTotale(int biglietti[], int spettacoli)
{
    int indice, totale = 0;

    for(indice = 0; indice < spettacoli; indice++){
        totale += biglietti[indice];
    }

    return totale;
}

int main()
{
    int indice, spettacoli, totale;
    double incasso, premio;

    cout << "Inserisci il numero di spettacoli proiettati: " << endl;
    cin >> spettacoli;
    int biglietti[spettacoli];

    for(indice = 0; indice < spettacoli; indice++){
        cout << "Inserisci il numero di biglietti venduti per lo spettacolo numero " << indice + 1 << ": " << endl;
        cin >> biglietti[indice];
    }

    totale = calcolaTotale(biglietti, spettacoli);
    incasso = totale * 9.50;

    if(totale > 500){
        premio = incasso * 0.05;
        cout << "Il totale supera i 500 biglietti, quindi il premio del personale e' del 5%." << endl;
    } else {
        premio = incasso * 0.02;
        cout << "Il totale non supera i 500 biglietti, quindi il premio del personale e' del 2%." << endl;
    }

    cout << "Il totale dei biglietti venduti e' di " << totale << "." << endl;
    cout << "L'incasso della serata e' di " << incasso << " euro." << endl;
    cout << "Il premio per il personale e' di " << premio << " euro." << endl;

    return 0;
}
