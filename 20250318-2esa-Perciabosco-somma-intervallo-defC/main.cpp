/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250318-2esa-Perciabosco-somma-intervallo-defC"
*/

#include <iostream>

using namespace std;

int main()
{
    int inf, sup, totale = 0, valore;
    cout << "Inserire l'estremo inferiore" << endl;
    cin >> inf;

    cout << "Inserire l'estremo superiore" << endl;
    cin >> sup;

    if (inf > sup)
    {
        valore = inf;
        inf = sup;
        sup = valore;
    }

    for (valore = inf; valore < sup + 1; valore++)
    {
        totale = totale + valore;
    }

    cout << "La somma di tutti i numeri compresi tra " << inf << " e " << sup << " e' uguale a " << totale << endl;

    return 0;
}
