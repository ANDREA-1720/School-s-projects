/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Indica il prezzo di un biglietto del traghetto in base all tipo di veicolo e alla sua potenza in cavalli."
*/

#include <iostream>

using namespace std;

int main()
{
    string tipo;
    int cilindrata, prezzo;

    cout << "Inserisci il tipo di autovettura ('autovettura' o 'camion'): ";
    cin >> tipo;
    if (!(tipo == "autovettura" || tipo == "camion"))
    {
        cout << "Tipo di veicolo non riconosciuto! Si prega di inserire un tipo di autovettura valido." << endl;
        return 1;
    }

    cout << "Inserisci la cilindrata in cavalli: ";
    cin >> cilindrata;
    if (cilindrata <= 0)
    {
        cout << "Inserisci un numero positivo per la cilindrata in cavalli!" << endl;
        return 1;
    }

    if (tipo == "autovettura")
    {
        if (cilindrata <= 1000)
        {
            prezzo = 20;
        }
        else if (cilindrata <= 2000)
        {
            prezzo = 30;
        }
        else
        {
            prezzo = cilindrata * 0.10;
        }
    }
    else if (tipo == "camion")
    {
        if (cilindrata <= 2000)
        {
            prezzo = 40;
        }
        else if (cilindrata <= 3000)
        {
            prezzo = 50;
        }
        else
        {
            prezzo = cilindrata;
        }
    }

    cout << "Il prezzo di un biglietto per un" << (tipo == "autovettura" ? "'" : " ") << tipo << " di " << cilindrata << "cc è di " << prezzo << "€." << endl;
    return 0;
}