/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20241014-2esa-Perciabosco-media-pari-dispari3numeriC"
*/

#include <iostream>

using namespace std;

int main()
{
    // Inizializzazione delle variabili
    int num1, num2, num3;
    int contaPari = 0, contaDispari = 0;
    double sommaPari = 0, sommaDispari = 0;

    // Acquisizione input
    cout << "Inserisci il primo numero: ";
    cin >> num1;
    cout << "Inserisci il secondo numero: ";
    cin >> num2;
    cout << "Inserisci il terzo numero: ";
    cin >> num3;

    // Elaborazione
    if (num1 % 2 == 0)
    {
        sommaPari += num1;
        contaPari++;
    }
    else
    {
        sommaDispari += num1;
        contaDispari++;
    }

    if (num2 % 2 == 0)
    {
        sommaPari += num2;
        contaPari++;
    }
    else
    {
        sommaDispari += num2;
        contaDispari++;
    }

    if (num3 % 2 == 0)
    {
        sommaPari += num3;
        contaPari++;
    }
    else
    {
        sommaDispari += num3;
        contaDispari++;
    }

    // Comunicazione dei risultati output

    if (contaPari > 0)
    {
        cout << "La media dei numeri pari è: " << sommaPari / contaPari << "." << endl;
    }
    else
    {
        cout << "Non ci sono numeri pari." << endl;
    }

    if (contaDispari > 0)
    {
        cout << "La media dei numeri dispari è: " << sommaDispari / contaDispari << "." << endl;
    }
    else
    {
        cout << "Non ci sono numeri dispari." << endl;
    }

    return 0;
}