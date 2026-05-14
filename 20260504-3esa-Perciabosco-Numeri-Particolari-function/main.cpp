/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione: "20260504-3esa-Perciabosco-Numeri-Particolari-function"
*/

#include <iostream>
#include <cmath>

using namespace std;

int fncSommaDivisori(int num, int i, int somma){
    if(i > num / 2){
        return somma;
    }

    if(num % i == 0){
        somma += i;
    }

    return fncSommaDivisori(num, i + 1, somma);
}

int main()
{
    int num, somma;
    cout << "Inserisci un numero: ";
    cin >> num;

    somma = fncSommaDivisori(abs(num), 1, 0);

    if(somma > num){
        cout << "Il numero " << num << " è abbondante." << endl;
    } else if(somma < num){
        cout << "Il numero " << num << " è difettivo." << endl;
    } else{
        cout << "Il numero " << num << " è perfetto." << endl;
    }

    return 0;
}