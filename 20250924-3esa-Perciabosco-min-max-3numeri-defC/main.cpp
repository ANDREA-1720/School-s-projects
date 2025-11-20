/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250924-3esa-Perciabosco-min-max-3numeri-defC"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int min, max, num, indice;

    for(indice = 0; indice < 3; indice++)
    {
        cout << "Inserisci il " << (indice + 1) << " numero: " << endl;
        cin >> num;

        if(indice == 0)
        {
            min = num;
            max = num;
        }
        else
        {
            if(num < min)
            {
                min = num;
            }
            if(num > max)
            {
                max = num;
            }
        }
    }
    return 0;
}
