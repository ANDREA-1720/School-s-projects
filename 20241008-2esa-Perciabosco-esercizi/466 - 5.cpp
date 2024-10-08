/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Inserito un peso, indica la quantità di sacchetti con massimo peso di 5kg, e cassette con massimo di 30kg, con il limite però di un massimo di 4 sacchetti e 2 cassette."
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double peso, peso_rimanente;
    int sacchetti = 0, cassette = 0;

    cout << "Inserisci il peso: ";
    cin >> peso;

    peso_rimanente = peso;

    // Prima prova con le cassette (più efficienti)
    if (peso_rimanente >= 30)
    {
        cassette = min(2, static_cast<int>(peso_rimanente / 30));
        peso_rimanente -= cassette * 30;
    }

    // Poi usa i sacchetti per il peso rimanente
    if (peso_rimanente > 0)
    {
        sacchetti = ceil(peso_rimanente / 5);
        if (sacchetti > 4)
        {
            // Se servono troppi sacchetti, prova ad aggiungere una cassetta
            if (cassette < 2)
            {
                cassette++;
                peso_rimanente -= 30;
                if (peso_rimanente > 0)
                {
                    sacchetti = ceil(peso_rimanente / 5);
                }
                else
                {
                    sacchetti = 0;
                }
            }
        }
    }

    // Se ancora troppi sacchetti, non è possibile trasportare tutto
    if (sacchetti > 4)
    {
        peso_rimanente = peso - (cassette * 30) - (4 * 5);
    }
    else
    {
        peso_rimanente = 0;
    }

    // Stampa il risultato
    if (peso_rimanente > 0)
    {
        cout << "Non è possibile trasportare un peso di " << peso << "kg." << endl;
        return 0;
    }

    cout << "Per " << peso << "kg, è necessario ";

    bool first = true;
    if (cassette > 0)
    {
        cout << (cassette == 1 ? "serve 1 cassetta" : "servono " + to_string(cassette) + " cassette");
        first = false;
    }

    if (sacchetti > 0)
    {
        if (!first)
            cout << " e ";
        cout << (sacchetti == 1 ? "1 sacchetto" : to_string(sacchetti) + " sacchetti");
    }

    cout << "." << endl;

    return 0;
}