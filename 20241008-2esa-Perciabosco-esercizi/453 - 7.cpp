/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Scrive il valore medio tra due numeri (se sono uguali, il valore medio è quello del numero stesso)."
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    double avg;
    cout << "Inserisci il primo numero: ";
    cin >> num1;
    cout << "Inserisci il secondo numero: ";
    cin >> num2;

    avg = (num1 + num2) / 2.00;

    cout << "Il valore medio tra " << num1 << " e " << num2 << " è: " << avg << endl;
    return 0;
}