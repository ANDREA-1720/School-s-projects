/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250128-2esa-perciabosco-scambio3cifre-seq"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, cif3 = 0, cif2 = 0, cif1 = 0, invertito, numDigits;
    cout << "Inserisci un numero tra 0 e 999: ";
    cin >> num;

    num = abs(num);
    num = ((num + 999 - abs(num - 999)) / 2);

    cif3 = num % 10;
    cif2 = (num / 10) % 10;
    cif1 = (num / 100) % 10;

    numDigits = (int)(floor(log10(num + 0.1)) + 1 + floor(1.0 / (num + 1)));

    invertito = cif3 * (int)pow(10, numDigits - 1) + cif2 * (int)pow(10, numDigits - 2) + cif1;

    cout << "Il numero " << num << " invertito e' " << invertito << "." << endl;
    return 0;
}
