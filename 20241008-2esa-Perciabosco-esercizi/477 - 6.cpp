/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Inseriti 5 numeri e indica se si tratta di una sequenza unitaria"
*/

#include <iostream>

using namespace std;

int main()
{
    double num1, num2, num3, num4, num5;
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

    if (num1 == round(num1) && num2 == round(num1 + 1) && num3 == round(num2 + 1) && num4 == round(num3 + 1) && num4 == round(num3 + 1) && num5 == round(num4 + 1))
    {
        cout << "La sequenza " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << ", " << num5 << " è unitaria." << endl;
    }
    else
    {
        cout << "La sequenza " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << ", " << num5 << " NON è unitaria." << endl;
    }

    return 0;
}