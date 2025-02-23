/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250217-2esa-Perciabosco-sommaintervalli-postC"
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

    do
    {
        indice++;
        somma += indice;
    } while (indice < num);
    cout << "La somma di tutti i numeri compresi tra 1 e " << num << " e': " << somma << endl;
    return 0;
}
