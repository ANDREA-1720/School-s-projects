/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Indica se un numero è pari o dispari."
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Inserisci il numero: ";
    cin >> num;

    if (num % 2 == 0)
        cout << num << " è pari." << endl;
    else
        cout << num << " è dispari." << endl;
    return 0;
}