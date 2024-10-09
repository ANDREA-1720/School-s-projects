/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Inserito un numero minore di 10000, indica le migliaia, le centinaia, le decine e le unità."
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num;
    int parti[4] = {0, 0, 0, 0};
    int nonZeroCount = 0;
    int stampati = 0;

    cout << "Inserisci un numero minore di 10000: ";
    cin >> num;

    if (num >= 10000)
    {
        cout << "Il numero inserito è maggiore di 10000!" << endl;
    }

    parti[0] = floor(num / 1000);
    parti[1] = floor((num - parti[0] * 1000) / 100);
    parti[2] = floor((num - parti[0] * 1000 - parti[1] * 100) / 10);
    parti[3] = num - parti[0] * 1000 - parti[1] * 100 - parti[2] * 10;

    if (parti[0] != 0)
        nonZeroCount++;
    if (parti[1] != 0)
        nonZeroCount++;
    if (parti[2] != 0)
        nonZeroCount++;
    if (parti[3] != 0)
        nonZeroCount++;

    cout << "Il numero è costituito da ";

    if (parti[0] != 0)
    {
        cout << parti[0] << " miglia";
        stampati++;
        if (stampati == nonZeroCount - 1)
            cout << " e ";
        else if (stampati < nonZeroCount)
            cout << ", ";
    }

    if (parti[1] != 0)
    {
        cout << parti[1] << " centinaia";
        stampati++;
        if (stampati == nonZeroCount - 1)
            cout << " e ";
        else if (stampati < nonZeroCount)
            cout << ", ";
    }

    if (parti[2] != 0)
    {
        cout << parti[2] << " decine";
        stampati++;
        if (stampati == nonZeroCount - 1)
            cout << " e ";
        else if (stampati < nonZeroCount)
            cout << ", ";
    }

    if (parti[3] != 0)
    {
        cout << parti[3] << " unità";
        stampati++;
    }

    cout << "." << endl;

    return 0;
}