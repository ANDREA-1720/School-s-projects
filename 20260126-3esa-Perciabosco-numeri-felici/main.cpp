/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione: "20260126-3esa-Perciabosco-numeri-felici"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, somma, comodo;
    bool provati[9]; 
    cout << "Inserisci il numero da controllare: " << endl;
    cin >> num;
    num = abs(num);

    while(true){
        somma = 0;
        comodo = num;
        while(comodo > 0)
        {
            somma += pow(comodo % 10, 2);

            comodo = comodo / 10;
        }

        num = somma;
        if(num == 1){
            break;
        }
        if(num < 10){
            if(provati[num - 1] == true){
                break;
            }
            provati[num - 1] = true;
        }
    }

    if(num == 1){
        cout << "Il numero e' felice!" << endl;
    }
    else{
        cout << "Il numero non e' felice!" << endl;
    }

    return 0;
}
