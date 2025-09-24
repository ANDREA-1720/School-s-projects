/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione: "20250917-2esa-Perciabosco-sommaintervalli-defC"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, somma = 0, indice = 0;
    cout << "Inserisci un numero: ";
    cin >> num;
    num = abs(num);

    for (indice = 1; indice <= num; indice++)
    {
        somma += indice;
    }

    cout << "La somma di tutti i numeri compresi tra 1 e " << num << " e': " << somma << endl;
    return 0;
}
