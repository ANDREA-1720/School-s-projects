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
    int num, divisore, quanti = 0;

    cout << "Inserisci il numero di cui mostrare i divisore: " << endl;
    cin >> num;

    for(divisore = 1; divisore <= abs(num); divisore++){
        if(num % divisore == 0){
            quanti++;
        }
    }

    if(num == 0 ){
        cout << "0 non ha divisori";
    } else {
        cout << "I " << quanti << " divisori di " << num << " sono: ";
    }

    for(divisore = 1; divisore <= abs(num); divisore++){
        if(num % divisore == 0){
            cout << "+/-" << divisore;
            if(divisore != abs(num)){
                cout << ", ";
            }
        }
    }

    cout << "." << endl;
    return 0;
}
