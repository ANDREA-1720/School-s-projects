/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250526-2esa-Perciabosco-fibonacci"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int corrente = 1, precedente = 1, indice, num;
    
    cout << "Inserisci il numero" << endl;
    cin >> num;
    num = abs(num);
    
    for(indice = 2; indice < num; indice++){
        precedente = corrente;
        corrente += precedente;
    }

    cout << "Il " << num << " della sequenza pitagorica è " << corrente << "." << endl;
    // comunicazione dei risultati output
    return 0;
}
