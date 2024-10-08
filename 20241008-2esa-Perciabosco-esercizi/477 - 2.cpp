/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Inseriti 3 numeri, indica la media dei loro valori assoluti e indica la quantità di numeri pari e dispari."
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int counter = 0;
    int num1, num2, num3;
    double media;
    cout << "Inserisci il primo numero: ";
    cin >> num1;
    cout << "Inserisci il secondo numero: ";
    cin >> num2;
    cout << "Inserisci il terzo numero: ";
    cin >> num3;

    if (num1 == 0 || num2 == 0 || num3 == 0)
    {
        cout << "Inserisci un numero non nullo!" << endl;
        return 1;
    }

    if (num1 % 2 != 0)
    {
        counter++;
    }
    if (num2 % 2 != 0)
    {
        counter++;
    }
    if (num3 % 2 != 0)
    {
        counter++;
    }

    media = (abs(num1) + abs(num2) + abs(num3)) / 3.00;

    cout << "La media dei valori assoluti dei tre numeri è " << media << " (ci sono " << counter << " numeri dispari e " << 3 - counter << " numeri pari)." << endl;

    return 0;
}
