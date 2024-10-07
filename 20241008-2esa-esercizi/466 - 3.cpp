/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Dati 3 numeri, indica se si tratta di una terna pitagorica"
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

    if ((num1 * num1) + (num2 * num2) == num3 * num3)
        cout << "(" << num1 << ", " << num2 << ", " << num3 << ") è una terna è pitagorica." << endl;
    else
        cout << "(" << num1 << ", " << num2 << ", " << num3 << ") NON è una terna è pitagorica." << endl;
}