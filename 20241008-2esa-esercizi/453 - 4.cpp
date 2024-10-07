/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Applica uno sconto del 20% se il numero è maggiore di 100 euro."
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Inserisci il numero: ";
    cin >> num;

    if (num > 100)
        num = num * 0.8;

    cout << "Il prezzo scontato è: " << num << "€." << endl;
    return 0;
}
