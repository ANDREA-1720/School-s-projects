/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250224-2esa-Perciabosco-conteggio-pari-dispari-defC"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, inf, sup, contaPari = 0, contaDispari = 0, comodo, conta;
    cout << "Inserisci la quantità di numeri da estrarre" << endl;
    cin >> num;
    cout << "Inserisci il numero minimo da estrarre" << endl;
    cin >> inf;
    cout << "Inserisci il numero massimo da estrarre" << endl;
    cin >> sup;

    srand(unsigned(time(NULL)));

    if (inf > sup)
    {
        cout << "Il numero minimo deve essere minore del numero massimo" << endl;
        return 1;
    }

    for (conta = 0; conta < num; conta++)
    {
        comodo = rand() % (sup - inf + 1) + inf;
        if (comodo % 2 == 0)
        {
            contaPari++;
        }
        else
        {
            contaDispari++;
        }
    }

    cout << "La quantità di numeri pari estratti è: " << contaPari << ", mentre quella di numeri dispari è: " << contaDispari << ", il che formano rispettivamente il " << round(((float)contaPari / (float)num * 100) * 100) / 100 << "% e il " << round(((float)contaDispari / (float)num * 100) * 100) / 100 << "% della somma" << endl;
    return 0;
}
