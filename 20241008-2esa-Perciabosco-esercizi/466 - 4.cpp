/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Ordina 4 numeri in ordine crescente."
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4;

    cout << "Inserisci il primo numero: ";
    cin >> num1;
    cout << "Inserisci il secondo numero: ";
    cin >> num2;
    cout << "Inserisci il terzo numero: ";
    cin >> num3;
    cout << "Inserisci il quarto numero: ";
    cin >> num4;

    num2 = num1 + num2;
    num1 = (num1 + (num2 - num1) - abs(num1 - (num2 - num1))) / 2;
    num2 = num2 - num1;

    num3 = num2 + num3;
    num2 = (num2 + (num3 - num2) - abs(num2 - (num3 - num2))) / 2;
    num3 = num3 - num2;

    num4 = num3 + num4;
    num3 = (num3 + (num4 - num3) - abs(num3 - (num4 - num3))) / 2;
    num4 = num4 - num3;

    num2 = num1 + num2;
    num1 = (num1 + (num2 - num1) - abs(num1 - (num2 - num1))) / 2;
    num2 = num2 - num1;

    num3 = num2 + num3;
    num2 = (num2 + (num3 - num2) - abs(num2 - (num3 - num2))) / 2;
    num3 = num3 - num2;

    num4 = num3 + num4;
    num3 = (num3 + (num4 - num3) - abs(num3 - (num4 - num3))) / 2;
    num4 = num4 - num3;

    num2 = num1 + num2;
    num1 = (num1 + (num2 - num1) - abs(num1 - (num2 - num1))) / 2;
    num2 = num2 - num1;

    cout << "I numeri in ordine crescente sono: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << "." << endl;
}