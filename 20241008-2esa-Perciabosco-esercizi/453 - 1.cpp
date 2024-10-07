/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Determina se un'età è maggiorenne."
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Inserire la propria età: ";
    cin >> num;

    if (num >= 18)
        cout << "Sei maggiorenne." << endl;
    else
        cout << "Sei minorenne." << endl;
    return 0;
}
