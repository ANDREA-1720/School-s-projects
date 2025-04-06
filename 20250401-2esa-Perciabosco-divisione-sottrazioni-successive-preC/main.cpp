/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250401-2esa-Perciabosco-divisione-sottrazioni-successive-preC"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int dividendo, divisore, resto;
    int quoziente = 0;
    cout << "Inserire il dividendo " << endl;
    cin >> dividendo;
    cout << "Inserire il divisore " << endl;
    cin >> divisore;

    if (divisore == 0)
    {
        cout << "Divisione impossibile" << endl;
        return 1;
    }

    resto = abs(dividendo);

    while (resto >= abs(divisore))
    {
        resto -= abs(divisore);
        quoziente++;
    }

    // Applica il segno al risultato se necessario
    if ((dividendo < 0 && divisore > 0) || (dividendo > 0 && divisore < 0))
    {
        quoziente = -quoziente;
    }

    cout << "Il quoziente della divisione e' " << quoziente << endl;
    cout << "Il resto della divisione e' " << resto << endl;

    return 0;
}