/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Applica una sconto del 5% per valori minori di 50, 6%  se minori di 65, 7% se minori di 80, 10% se maggiori di 80."
*/

#include <iostream>

using namespace std;

int main()
{
    double importo;
    cout << "Inserisci l'importo da scontare: ";
    cin >> importo;

    if (importo < 50)
    {
        cout << "Il prezzo scontato è " << importo * 0.95 << "€ (con uno sconto netto di " << importo * 0.05 << "€)." << endl;
        return 0;
    }
    if (importo < 65)
    {
        cout << "Il prezzo scontato è " << importo * 0.94 << "€ (con uno sconto netto di " << importo * 0.06 << "€)." << endl;
        return 0;
    }
    if (importo < 80)
    {
        cout << "Il prezzo scontato è " << importo * 0.93 << "€ (con uno sconto netto di " << importo * 0.07 << "€)." << endl;
        return 0;
    }

    cout << "Il prezzo scontato è " << importo * 0.90 << "€ (con uno sconto netto di " << importo * 0.10 << "€)." << endl;

    return 0;
}