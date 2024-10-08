/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Inseriti 5 numeri, indica se si tratta di un numero pari o dispari."
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4, num5;
    cout << "Inserisci il primo numero: ";
    cin >> num1;
    cout << "Inserisci il secondo numero: ";
    cin >> num2;
    cout << "Inserisci il terzo numero: ";
    cin >> num3;
    cout << "Inserisci il quarto numero: ";
    cin >> num4;
    cout << "Inserisci il quinto numero: ";
    cin >> num5;

    if (num1 == 0 || num2 == 0 || num3 == 0 || num4 == 0 || num5 == 0)
    {
        cout << "Inserisci un numero non nullo!" << endl;
        return 1;
    }

    if (num1 % 2 == 0)
    {
        cout << num1 << " è pari." << endl;
    }
    else if (num1 % 2 != 0)
    {
        cout << num1 << " è dispari." << endl;
    }

    if (num2 % 2 == 0)
    {
        cout << num2 << " è pari." << endl;
    }
    else if (num2 % 2 != 0)
    {
        cout << num2 << " è dispari." << endl;
    }

    if (num3 % 2 == 0)
    {
        cout << num3 << " è pari." << endl;
    }
    else if (num3 % 2 != 0)
    {
        cout << num3 << " è dispari." << endl;
    }

    if (num4 % 2 == 0)
    {
        cout << num4 << " è pari." << endl;
    }
    else if (num4 % 2 != 0)
    {
        cout << num4 << " è dispari." << endl;
    }

    if (num5 % 2 == 0)
    {
        cout << num5 << " è pari." << endl;
    }
    else if (num5 % 2 != 0)
    {
        cout << num5 << " è dispari." << endl;
    }

    return 0;
}
