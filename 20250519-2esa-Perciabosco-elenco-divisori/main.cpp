/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250519-2esa-Perciabosco-elenco-divisori"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, divisore;

    cout << "Inserisci il numero di cui mostrare i divisore: " << endl;
    cin >> num;

    for(divisore = 1; divisore <= abs(num); divisore++){
        if(num % divisore == 0){
            cout << "+/- " << divisore << " è un divsore di " << num << "." << endl;
        }
    }

    return 0;
}
