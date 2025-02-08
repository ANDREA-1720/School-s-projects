/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250128-2esa-perciabosco-scambio3cifre"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int cif1, cif2, cif3, num, invertito;

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
            cif2 = num % 10;
            cif1 = (num / 10) % 10;
        }
        else if (num < 1000)
        {
            cif3 = num % 10;
            cif2 = (num / 10) % 10;
            cif1 = (num / 100) % 10;
        }
    }

    invertito = cif3 * 100 + cif2 * 10 + cif1;

    cout << "Il numero " << num << " invertito e' " << invertito << "." << endl;
    return 0;
}
