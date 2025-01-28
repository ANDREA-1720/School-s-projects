/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250127-2esa-Perciabosco-sistemi-con-cramerC"
*/

#include <iostream>

using namespace std;

int main()
{
    double coefa1, coefa2, coefb1, coefb2, coefc1, coefc2, delta, solx, soly;
    cout << "ax+by=c" << endl;
    cout << "a'x+b'y=c'" << endl;
    cout << endl;
    cout << "Inserisci il coefficiente a" << endl;
    cin >> coefa1;
    cout << "Inserisci il coefficiente b" << endl;
    cin >> coefb1;
    cout << "Inserisci il coefficiente c" << endl;
    cin >> coefc1;
    cout << "Inserisci il coefficiente a'" << endl;
    cin >> coefa2;
    cout << "Inserisci il coefficiente b'" << endl;
    cin >> coefb2;
    cout << "Inserisci il coefficiente c'" << endl;
    cin >> coefc2;

    if (coefa2 != 0 && coefb2 != 0 && (coefa1 / coefa2 != coefb1 / coefb2))
    {
        delta = coefa1 * coefb2 - coefb1 * coefa2;
        solx = (coefc1 * coefb2 - coefb1 * coefc2) / delta;
        soly = (coefa1 * coefc2 - coefc1 * coefa2) / delta;
        cout << "La soluzione è X=" << solx << " e Y=" << soly << ", quindi le due rette si intersecano in (" << solx << ", " << soly << ")." << endl;
    }
    else
    {
        if (coefa2 != 0 && coefc2 != 0 && (coefa1 / coefa2 == coefc1 / coefc2))
        {
            cout << "Il sistema è indeterminato, quindi le rette sono parallele e coincidenti." << endl;
        }
        else
        {
            cout << "Il sistema è impossibile, quindi le rette sono parallele e distinte." << endl;
        }
    }

    return 0;
}