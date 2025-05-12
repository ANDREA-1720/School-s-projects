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

    if (esponente % 2 == 0)
    {
        segno = 1;
    }
    else
    {
        segno = base / abs(base);
    }

    potenza = 1;
    for (conta = 0; conta < abs(esponente); conta++)
    {
        temp = 0;
        for (indice = 0; indice < abs(base); indice++)
        {
            temp += potenza;
        }
        potenza = temp;
    }

    potenza *= segno;
    
    cout << base << " elevato alla " << esponente << " è uguale a ";
    if(esponente < 0)
    {
        cout << "1/";
    }
    cout << potenza << "." << endl;
    
    return 0;
}
