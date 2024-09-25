/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: 20240924-2esa-Perciabosco-scambio2numeriS
*/

#include <iostream>

int main()
{
    // Inizializzazione delle variabili
    int var1, var2;

    // acquisizione dei numeri di input
    std::cout << "Inserisci il primo numero: ";
    std::cin >> var1;
    std::cout << "Inserisci il secondo numero: ";
    std::cin >> var2;

    // Inversione dei numeri (elaborazione)
    var1 = var1 + var2;
    var2 = var1 - var2;
    var1 = var1 - var2;

    // comunicazione dei risultati output
    std::cout << "Ora il primo numero è " << var1 << ", mentre il secondo è " << var2 << "." << std::endl;

    return 0;
}
