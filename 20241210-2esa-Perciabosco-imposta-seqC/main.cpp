/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20241210-2esa-Perciabosco-imposta-seqC"
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Inizializzazione delle variabili
    double numero, imposta = 0.0, eccedenza;

    // Acquisizione input
    cout << "Inserisci il valore di cui calcolare l'imposta: ";
    cin >> numero;

    // Scaglione 1: 0-5000 al 5%
    imposta += ((numero + 5000 - abs(numero - 5000)) / 2) * 0.05;

    // Scaglione 2: 5000-15000 al 8%
    eccedenza = ((numero - 5000) + abs(numero - 5000)) / 2;
    imposta += ((eccedenza + 10000 - abs(eccedenza - 10000)) / 2) * 0.08;

    // Scaglione 3: 15000-25000 al 18%
    eccedenza = ((numero - 15000) + abs(numero - 15000)) / 2;
    imposta += ((eccedenza + 10000 - abs(eccedenza - 10000)) / 2) * 0.18;

    // Scaglione 4: 25000-35000 al 24%
    eccedenza = ((numero - 25000) + abs(numero - 25000)) / 2;
    imposta += ((eccedenza + 10000 - abs(eccedenza - 10000)) / 2) * 0.24;

    // Oltre 35000 al 36%
    imposta += ((numero - 35000) + abs(numero - 35000)) / 2 * 0.36;

    // Comunicazione dei risultati
    cout << "L'imposta equivale a " << imposta << "€, quindi il totale è di " << numero + imposta << "€." << endl;
    return 0;
}
