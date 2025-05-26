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
    unsigned long corrente = 1, precedente = 0;
    int num, indice;
    
    cout << "Inserisci il numero" << endl;
    cin >> num;
    num = abs(num);
    
    if(num > 93){
        cout << "Il numero è troppo grande per essere calcolato, inseriscine uno minore." << endl;
    } else {
        cout << "I numeri della seguenza di fibonacci fino al numero " << num << " sono: 1";
        for(indice = 1; indice < num; indice++){
            corrente += precedente;
            precedente = corrente - precedente;
            cout << ", " << corrente;
        }
        cout << "." << endl;
    }
    
    return 0;
}
