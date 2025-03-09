/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250224-2esa-Perciabosco-conteggio-pari-dispari-postC"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, inf, sup, contaPari = 0, contaDispari = 0, conta = 0, comodo;
    cout << "Inserisci la quantità di numeri da estrarre" << endl;
    cin >> num;
    cout << "Inserisci il numero minimo da estrarre" << endl;
    cin >> inf;
    cout << "Inserisci il numero massimo da estrarre" << endl;
    cin >> sup;

    srand(unsigned(time(NULL)));
    num = abs(num);

    if (inf == 0)
    {
        cout << "Inserisci un numero di ripetizioni diverso da 0." << endl;
        return 1;
    }
    if (inf > sup)
    {
        cout << "Il numero minimo deve essere minore del numero massimo." << endl;
        return 1;
    }

    do
    {
        conta++;
        comodo = rand() % (sup - inf + 1) + inf;
        if (comodo % 2 == 0)
        {
            contaDispari++;
        }
        else
        {
            contaPari++;
        }
    } while (conta < num);

    cout << "La quantità di numeri pari estratti è: " << contaPari << ", mentre quella di numeri dispari è: " << contaDispari << ", il che formano rispettivamente il " << round((double)contaPari / (double)num * 100) << "% e il " << round((double)contaDispari / (double)num * 100) << "% della somma." << endl;
    return 0;
}
