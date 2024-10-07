/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Scrive il triplo di un numero se esso è dispari, altrimenti scrive il doppio."
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Inserisci il numero: ";
    cin >> num;

    if (num % 2 != 0)
        cout << num * 3 << endl;
    else
        cout << num * 2 << endl;
    return 0;
}