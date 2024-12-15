/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Calcola l'imposta progressiva."
*/

#include <iostream>

using namespace std;

int main()
{
    double num, imposta = 0.0;

    cout << "Inserisci il valore di cui calcolare l'imposta: ";
    cin >> num;

    if (num <= 5000)
    {
        imposta = num * 0.05;
    }
    else
    {
        imposta += 5000 * 0.05;

        if (num <= 15000)
        {
            imposta += (num - 5000) * 0.08;
        }
        else
        {
            imposta += (15000 - 5000) * 0.08;

            if (num <= 25000)
            {
                imposta += (num - 15000) * 0.18;
            }
            else
            {
                imposta += (25000 - 15000) * 0.18;

                if (num <= 35000)
                {
                    imposta += (num - 25000) * 0.24;
                }
                else
                {
                    imposta += (35000 - 25000) * 0.24;

                    imposta += (num - 35000) * 0.36;
                }
            }
        }
    }

    cout << "L'imposta equivale a " << imposta << "€, quindi il totale è di " << num + imposta << "€." << endl;
    return 0;
}