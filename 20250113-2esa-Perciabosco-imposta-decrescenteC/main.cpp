/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250113-2esa-Perciabosco-imposta-decrescenteC"
*/

#include <iostream>

using namespace std;

int main()
{
    double importo, imposta;

    cout << "Inserisci l'importo: ";
    cin >> importo;

    importo = abs(importo);

    if (importo >= 40000)
    {
        imposta = 8000 * 0.05 + 7000 * 0.10 + 8000 * 0.15 + 17000 * 0.20 + (importo - 40000) * 0.30;
    }
    else if (importo >= 23000)
    {
        imposta = 8000 * 0.05 + 7000 * 0.10 + 8000 * 0.15 + (importo - 23000) * 0.20;
    }
    else if (importo >= 15000)
    {
        imposta = 8000 * 0.05 + 7000 * 0.10 + (importo - 15000) * 0.15;
    }
    else if (importo >= 8000)
    {
        imposta = 8000 * 0.05 + (importo - 8000) * 0.10;
    }
    else
    {
        imposta = importo * 0.05;
    }

    cout << "L'imposta da pagare è: " << imposta << " euro" << endl;

    return 0;
}
