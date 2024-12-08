/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20241203-2esa-Perciabosco-angoli-triangoloC"
*/

#include <iostream>

using namespace std;

int main()
{
    double angolo1, angolo2, angolo3;
    cout << "Inserisci l' apertura del primo angolo: ";
    cin >> angolo1;
    cout << "Inserisci l' apertura del secondo angolo: ";
    cin >> angolo2;
    cout << "Inserisci l' apertura del terzo angolo: ";
    cin >> angolo3;
    angolo1 = abs(angolo1);
    angolo2 = abs(angolo2);
    angolo3 = abs(angolo3);
    if (angolo1 == 0 || angolo2 == 0 || angolo3 == 0)
    {
        cout << "E' stato inserito un numero uguale a 0." << endl;
    }
    else if (angolo1 + angolo2 + angolo3 == 180)
    {
        if (angolo1 == angolo2 && angolo2 == angolo3)
            cout << "Il triangolo è equiangolo." << endl;
        else if (angolo1 > 90 || angolo2 > 90 || angolo3 > 90)
            cout << "Il triangolo è ottusangolo." << endl;
        else
            cout << "Il triangolo è acutangolo." << endl;
    }
    else
    {
        cout << "I tre angoli non possono formare un triangolo." << endl;
    }
    return 0;
}