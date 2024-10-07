/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Indica se un numero è divisibile per 5."
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Inserisci il numero: ";
    cin >> num;

    if (num % 5 == 0)
        cout << num << " è divisibile per 5 (" << num << "/5" << "=" << num / 5 << ")." << endl;
    else
        cout << num << " NON è divisibile per 5." << endl;
    return 0;
}
