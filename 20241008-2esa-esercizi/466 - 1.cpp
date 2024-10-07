/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Dati 2 numeri, li inverte se il primo è maggiore di il secondo."
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
    {
        num2 = num1 + num2;
        num1 = num2 - num1;
        num2 = num2 - num1;
        cout << "I numeri inverti sono: " << num1 << " e " << num2 << "." << endl;
    }
    else
        cout << "I numeri non sono stati invertiti e sono: " << num1 << " e " << num2 << "." << endl;
    return 0;
}