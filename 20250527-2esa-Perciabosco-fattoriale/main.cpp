/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250527-2esa-Perciabosco-fattoriale"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, indice;
    unsigned long fat = 1;

    cout << "Inserisisci il numero di cui calcolare il fattoriale: " << endl;
    cin >> num;
    num = abs(num);
    
    for(int indice = 1; indice <= num; indice++){
        fat *= indice;
    }

    cout << num << "! è uguale a " << fat << "." << endl;

    return 0;
}
