/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: 20240920-2esa-Perciabosco-somma2numeriC
*/

#include <iostream>

using namespace std;

int main()
{
    // Inizializzazione delle variabili
    int num1, num2, somma;

    // acquisizione dei numeri di input
    cout << "Inserisci il primo numero: ";
    cin >> num1;
    cout << "Inserisci il secondo numero: ";
    cin >> num2;

    somma = num1 + num2;

    // comunicazione dei risultati output
    cout << "La somma di " << num1 << " e " << num2 << " è uguale a " << somma << endl;

    return 0;
}
