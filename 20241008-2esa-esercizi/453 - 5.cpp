/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Indica lo stato di sicurezza in base alla temperatura di una serra."
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Inserisci il numero: ";
    cin >> num;

    if ((num >= 5 && num < 18) || num > 18)
        cout << "La serra è in una situazione di pericolo." << endl;
    else if (num < 5)
        cout << "La serra presenta danni irreparabili." << endl;
    else
        cout << "La serra è in buone condizioni." << endl;
    return 0;
}
