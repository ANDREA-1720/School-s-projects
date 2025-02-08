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
    int num, cif1, cif2, cif3, invertito;

    cout << "Inserisci un numero tra 0 e 999: ";
    cin >> num;

    num = abs(num);
    num = ((num + 999 - abs(num - 999)) / 2);

    cif3 = num % 10;
    cif2 = (num / 10) % 10;
    cif1 = (num / 100) % 10;
    invertito = cif3 * 100 + cif2 * 10 + cif1;

    cout << "Il numero " << num << " invertito e' " << invertito << "." << endl;
    return 0;
}
