/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione: "20250917-2esa-Perciabosco-sommaintervalli-pari-dispari-preC"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, sommaPari = 0, sommaDispari = 0, indice = 0;
    cout << "Inserisci un numero: ";
    cin >> num;
    num = abs(num);
    while (indice < num)
    {
        indice++;
        if(indice % 2 == 0){
            sommaPari += indice;
        } else {
            sommaDispari += indice;
        }
    }
    cout << "La somma di tutti i numeri pari  compresi tra 1 e " << num << " e': " << sommaPari << ", mentre quella dei numeri dispari è " << sommaDispari << "." << endl;
    return 0;
}
