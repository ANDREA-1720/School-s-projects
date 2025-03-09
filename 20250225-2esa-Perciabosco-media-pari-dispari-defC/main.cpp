/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250225-2esa-Perciabosco-media-pari-dispari-preC"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, inf, sup, contaPari = 0, contaDispari = 0, comodo, conta;
    double mediaPari = 0, mediaDispari = 0;
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
            contaDispari++;
            mediaDispari += comodo;
        }
        else
        {
            contaPari++;
            mediaPari += comodo;
        }
    }
    if (contaPari != 0)
        mediaPari /= contaPari;
    if (contaDispari != 0)
        mediaDispari /= contaDispari;

    cout << "La media dei numeri pari estratti è: " << round(mediaPari * 100) / 100 << ", mentre quella dei numeri dispari è: " << round(mediaDispari * 100) / 100 << "." << endl;
    return 0;
}
