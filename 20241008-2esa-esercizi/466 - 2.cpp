/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Dati 3 numeri, indica la presenza di numeri uguali"
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Inserisci il primo numero: ";
    cin >> num1;
    cout << "Inserisci il secondo numero: ";
    cin >> num2;
    cout << "Inserisci il terzo numero: ";
    cin >> num3;

    if (num1 == num2)
        cout << num1 << " è in comune a al primo numero e al secondo." << endl;
    else if (num1 == num3)
        cout << num1 << " è in comune al primo numero e al terzo." << endl;
    else if (num2 == num3)
        cout << num2 << " è in comune al secondo numero e al terzo." << endl;
    else
        cout << "Non ci sono numeri in comune." << endl;
    return 0;
}