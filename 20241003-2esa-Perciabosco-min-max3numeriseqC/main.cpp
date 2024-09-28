/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: 20241003-2esa-Perciabosco-min-max3numeriseqC
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // Inizializzazione delle variabili
    int num1, num2, num3;

    // acquisizione dei numeri di input
    cout << "Inserisci il primo numero: ";
    cin >> num1;
    cout << "Inserisci il secondo numero: ";
    cin >> num2;
    cout << "Inserisci il terzo numero: ";
    cin >> num3;

    // ordinamento numeri (elaborazione)
    num2 = num1 + num2;
    num1 = (num1 + (num2 - num1) - abs(num1 - (num2 - num1))) / 2;
    num2 = num2 - num1;

    num3 = num2 + num3;
    num2 = (num2 + (num3 - num2) - abs(num2 - (num3 - num2))) / 2;
    num3 = num3 - num2;

    num2 = num1 + num2;
    num1 = (num1 + (num2 - num1) - abs(num1 - (num2 - num1))) / 2;
    num2 = num2 - num1;

    // comunicazione dei risultati output
    cout << "I numeri in ordine crescente sono: " << num1 << ", " << num2 << ", " << num3 << endl;

    return 0;
}
