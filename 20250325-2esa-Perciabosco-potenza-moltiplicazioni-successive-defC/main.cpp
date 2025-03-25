/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250325-2esa-Perciabosco-potenza-moltiplicazioni-successive-defC"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, pot, conta;
    double prodotto = 1;
    cout << "Inserisci il numero: " << endl;
    cin >> num;
    cout << "Inserisci la potenza: " << endl;
    cin >> pot;
    for(conta = 0; conta < pot; conta++)
    {
        prodotto *= num;
    }
    if (pot < 0)
    {
        prodotto = 1/prodotto;
    }
    cout << num << " elevato alla " << pot << " è " << prodotto << "." << endl;
    return 0;
}
