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
    unsigned long corrente = 1, precedente = 1, indice;
    int num;
    
    cout << "Inserisci il numero" << endl;
    cin >> num;
    num = abs(num);
    
    if(num > 93){
        cout << "Il numero è troppo grande per essere calcolato, inseriscine uno minore"
    } else {
        for(indice = 2; indice < num; indice++){
            corrente += precedente;
            precedente = corrente - precedente;
        }
        cout << "Il " << num << " della sequenza di fibonacci è " << corrente << "." << endl;
    }
    
    return 0;
}
