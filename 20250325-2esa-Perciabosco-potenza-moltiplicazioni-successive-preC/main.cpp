/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250325-2esa-Perciabosco-potenza-moltiplicazioni-successive-preC"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, pot, conta = 0;
    double prodotto = 1;
    cout << "Inserisci il numero: " << endl;
    cin >> num;
    cout << "Inserisci la potenza: " << endl;
    cin >> pot;
    while (conta < abs(pot))
    {
        conta++;
        prodotto *= num;
    }
    if (pot < 0)
    {
        prodotto = 1/prodotto;
    }
    cout << num << " elevato alla " << pot << " è " << prodotto << "." << endl;
    return 0;
}
