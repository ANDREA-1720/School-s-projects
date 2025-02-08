/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250128-2esa-perciabosco-somma3cifre-seq"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, cif1, cif2, cif3, somma;

    cout << "Inserisci un numero tra 0 e 999: ";
    cin >> num;

    num = abs(num);
    num = ((num + 999 - abs(num - 999)) / 2);

    cif1 = num % 10;
    cif2 = (num / 10) % 10;
    cif3 = (num / 100) % 10;
    somma = cif1 + cif2 + cif3;

    cout << "La somma delle cifre di " << num << " e' " << somma << "." << endl;
    return 0;
}
