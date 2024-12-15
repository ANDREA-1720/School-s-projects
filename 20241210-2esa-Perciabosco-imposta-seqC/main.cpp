/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20241210-2esa-Perciabosco-imposta-seqC"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // Inizializzazione delle variabili
    double numero, imposta = 0.0;

    // acquisizione input
    cout << "Inserisci il valore di cui calcolare l'imposta: ";
    cin >> numero;

    // elaborazione dei dati

    // Scaglione 1: 0-5000 al 5%
    imposta += ((5000 + min(numero, 5000.0) - abs(5000 - min(numero, 5000.0))) / 2) * 0.05;

    // Scaglione 2: 5000-15000 al 8%
    imposta += ((15000 + min(max(numero - 5000.0, 0.0), 10000.0) - abs(15000 - min(max(numero - 5000.0, 0.0), 10000.0))) / 2 + abs((15000 + min(max(numero - 5000.0, 0.0), 10000.0) - abs(15000 - min(max(numero - 5000.0, 0.0), 10000.0))) / 2)) / 2 * 0.08;

    // Scaglione 3: 15000-25000 al 18%
    imposta += ((25000 + min(max(numero - 15000.0, 0.0), 10000.0) - abs(25000 - min(max(numero - 15000.0, 0.0), 10000.0))) / 2 + abs((25000 + min(max(numero - 15000.0, 0.0), 10000.0) - abs(25000 - min(max(numero - 15000.0, 0.0), 10000.0))) / 2)) / 2 * 0.18;

    // Scaglione 4: 25000-35000 al 24%
    imposta += ((35000 + min(max(numero - 25000.0, 0.0), 10000.0) - abs(35000 - min(max(numero - 25000.0, 0.0), 10000.0))) / 2 + abs((35000 + min(max(numero - 25000.0, 0.0), 10000.0) - abs(35000 - min(max(numero - 25000.0, 0.0), 10000.0))) / 2)) / 2 * 0.24;

    // Resto al 36%
    imposta += ((numero - 35000) + abs(numero - 35000)) / 2 * 0.36;

    // comunicazione dei risultati output
    cout << "L'imposta equivale a " << imposta << "€, quindi il totale è di " << numero + imposta << "€." << endl;
    return 0;
}
