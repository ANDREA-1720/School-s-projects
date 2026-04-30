/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20260430-classe-cognome-MCD-Euclide-function"
*/

#include <iostream>
#include <math.h>

using namespace std;

int fncmcd (int num1, int num2) {
    int risultato;
    if(num2 == 0){
        risultato = num1;
    } else {
        risultato = fncmcd(num2, num1 % num2);
    }
    return risultato;
}

int main() {
    int num1, num2;
    cout << "Inserisci il primo numero: " << endl;
    cin >> num1;
    cout << "Inserisci il secondo numero: " << endl;
    cin >> num2;
    num1 = abs(num1);
    num2 = abs(num2);

    cout << "Il massimo comune divisore tra " << num1 << " e " << num2 << " è: " << fncmcd(num1, num2) << "." << endl;
    return 0;
}
