/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20241010-2esa-Perciabosco-min-max3numeri-altC"
*/

#include <iostream>

using namespace std;

int main()
{
    // Inizializzazione delle variabili
    int num1, num2, num3;

    // acquisizione input
    cout << "Inserisci il primo numero: ";
    cin >> num1;
    cout << "Inserisci il secondo numero: ";
    cin >> num2;
    cout << "Inserisci il terzo numero: ";
    cin >> num3;

    // elaborazione
    if (num1 > num2)
    {
        num2 = num1 + num2;
        num1 = num2 - num1;
        num2 = num2 - num1;
    }
    if (num2 > num3)
    {
        num3 = num2 + num3;
        num2 = num3 - num2;
        num3 = num3 - num2;
    }
    if (num1 > num2)
    {
        num2 = num1 + num2;
        num1 = num2 - num1;
        num2 = num2 - num1;
    }

    // comunicazione dei risultati output
    cout << "I numeri in ordine crescente sono: " << num1 << ", " << num2 << ", " << num3 << endl;
    return 0;
}
