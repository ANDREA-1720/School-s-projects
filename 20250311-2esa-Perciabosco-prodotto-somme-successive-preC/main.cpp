/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250311-2esa-Perciabosco-prodotto-somme-successive-preC"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int fattore1, fattore2, prodotto = 0, conta = 0;
    cout << "Inserisci il primo fattore: " << endl;
    cin >> fattore1;
    cout << "Inserisci il secondo fattore: " << endl;
    cin >> fattore2;
    while (conta < abs(fattore1))
    {
        conta++;
        prodotto += fattore2;
    }
    if (fattore1 < 0)
    {
        prodotto = -prodotto;
    }
    cout << "Il prodotto di " << fattore1 << " e " << fattore2 << " è " << prodotto << "." << endl;
    return 0;
}
