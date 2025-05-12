/*
    Autore: Andrea Perciabosco
    Classe: 2esa
    Descri: 202504428-2esa-Perciabosco-potenza-somme-succesive
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int potenza = 1, base, esponente, conta, indice, segno, temp;
    cout << "Inserisci la base della potenza" << endl;
    cin >> base;
    cout << "Inserisci l'esponente" << endl;
    cin >> esponente;
    esponente = abs(esponente);

    if (base == 0)
    {
        potenza = 0;
    }
    else
    {
        if (esponente % 2 == 0)
        {
            segno = 1;
        }
        else
        {
            segno = base / abs(base);
        }

        potenza = 1;
        for (conta = 0; conta < esponente; conta++)
        {
            temp = 0;
            for (indice = 0; indice < abs(base); indice++)
            {
                temp += potenza;
            }
            potenza = temp;
        }

        potenza *= segno;
    }

    if(esponente < 0)
    {
        cout << base << " elevato alla " << esponente << " è uguale a 1/" << potenza << "." << endl;
    } else
    {
        cout << base << " elevato alla " << esponente << " è uguale a " << potenza << "." << endl;
    }
    return 0;
}
