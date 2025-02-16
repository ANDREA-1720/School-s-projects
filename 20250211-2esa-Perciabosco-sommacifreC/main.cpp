/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250211-2esa-Perciabosco-sommacifreC"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, cif1 = 0, cif2 = 0, cif3 = 0, somma;

    cout << "Inserisci un numero tra 0 e 999: ";
    cin >> num;

    num = abs(num);

    if (num > 999)
    {
        cout << "Il numero inserito non e' compreso tra 0 e 999." << endl;
    }
    else
    {
        if (num < 10)
        {
            cif1 = num;
        }
        else if (num < 100)
        {
            cif1 = num % 10;
            cif2 = (num / 10) % 10;
        }
        else if (num < 1000)
        {
            cif1 = num % 10;
            cif2 = (num / 10) % 10;
            cif3 = (num / 100) % 10;
        }
    }

    somma = cif1 + cif2 + cif3;

    cout << "La somma delle cifre di " << num << " e' " << somma << "." << endl;
    return 0;
}
