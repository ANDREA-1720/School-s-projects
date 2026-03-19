/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descri: Ordinamento di 3 numero con i sottoprogrammi
*/

#include <iostream>
#include <sstream>
using namespace std;

void subscambia1(int num1, int num2) // passaggio per valore
{
    int comodo;
    if (num1 > num2)
    {
        comodo = num1;
        num1 = num2;
        num2 = comodo;
    }
}

void subscambia2(int &num1, int &num2) // passaggio per riferimento o indirizzo
{
    int comodo;
    if (num1 > num2)
    {
        comodo = num1;
        num1 = num2;
        num2 = comodo;
    }
}

int main()
{
    // fase di dichiarazione delle variabili
    int primo, secondo, terzo;
    stringstream msg1, msg2;

    // fase di acquisizione
    cout << "Inserisci il primo numero " << endl;
    cin >> primo;
    cout << "Inserisci il secondo numero " << endl;
    cin >> secondo;
    cout << "Inserisci il terzo numero " << endl;
    cin >> terzo;

    // fase di elaborazione per valore
    subscambia1(primo, secondo);
    subscambia1(primo, terzo);
    subscambia1(secondo, terzo);

    // fase di comunicazione dei risultati
    msg1 << "I tre numeri sono: " << endl;
    msg1 << primo << endl;
    msg1 << secondo << endl;
    msg1 << terzo << endl;
    cout << msg1.str();

    // fase di elaborazione per riferimento
    subscambia2(primo, secondo);
    subscambia2(primo, terzo);
    subscambia2(secondo, terzo);

    // fase di comunicazione dei risultati
    msg2 << "I tre numeri ordinati sono: " << endl;
    msg2 << primo << endl;
    msg2 << secondo << endl;
    msg2 << terzo << endl;
    cout << msg2.str();

    return 0;
}