/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250113-2esa-Perciabosco-scontisticaC"
*/

#include <iostream>
using namespace std;

int main()
{
    int pezzi;
    double costo, totale;

    cout << "Inserisci il numero dei pezzi del prodotto: ";
    cin >> pezzi;

    cout << "Inserisci il costo di listino del prodotto: ";
    cin >> costo;

    pezzi = abs(pezzi);
    costo = abs(costo);

    if (pezzi <= 5)
    {
        totale = pezzi * costo;
    }
    else
    {
        if (pezzi <= 15)
        {
            totale = pezzi * costo * 0.95;
        }
        else
        {
            if (pezzi < 30)
            {
                totale = pezzi * costo * 0.80;
            }
            else
            {
                totale = pezzi * costo * 0.70;
            }
        }
    }

    cout << "Il totale da pagare e': " << totale << endl;

    return 0;
}
