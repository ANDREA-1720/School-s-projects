/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Presi 2 numeri, mostra il maggiore."
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Inserisci il primo numero: ";
    cin >> num1;
    cout << "Inserisci il secondo numero: ";
    cin >> num2;

    if (num1 > num2)
        cout << num1 << " è maggiore di " << num2 << "." << endl;
    else if (num1 < num2)
        cout << num2 << " è maggiore di " << num1 << "." << endl;
    else
        cout << num1 << " e " << num2 << " sono uguali." << endl;
    return 0;
}
