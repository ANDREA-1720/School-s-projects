/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Inseriti 4 numeri indica il minore."
*/

#include <iostream>

using namespace std;

int main()
{
    double num1, num2, num3, num4;
    cout << "Inserisci il primo numero: ";
    cin >> num1;
    cout << "Inserisci il secondo numero: ";
    cin >> num2;
    cout << "Inserisci il terzo numero: ";
    cin >> num3;
    cout << "Inserisci il quarto numero: ";
    cin >> num4;

    if (num1 < num2 && num1 < num3 && num1 < num4)
    {
        cout << num1 << " è il numero minore." << endl;
    }
    else if (num2 < num1 && num2 < num3 && num2 < num4)
    {
        cout << num2 << " è il numero minore." << endl;
    }
    else if (num3 < num1 && num3 < num2 && num3 < num4)
    {
        cout << num3 << " è il numero minore." << endl;
    }
    else if (num4 < num1 && num4 < num2 && num4 < num3)
    {
        cout << num4 << " è il numero minore." << endl;
    }

    return 0;
}
