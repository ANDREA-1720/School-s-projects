/*
    Autore: Andrea Perciabosco
    Classe: 2esa
    Descri: 202504428-2esa-Perciabosco-potenza-somme-succesive
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int PERpotenza = 1, PERbase, PEResponente, PERconta, PERindice, PERsegno, PERtemp;
    cout << "Inserisci la base della potenza" << endl;
    cin >> PERbase;
    cout << "Inserisci l'esponente" << endl;
    cin >> PEResponente;
    PEResponente = abs(PEResponente);

    if (PERbase == 0)
    {
        PERpotenza = 0;
    }
    else
    {
        if (PEResponente % 2 == 0)
        {
            PERsegno = 1;
        }
        else
        {
            PERsegno = PERbase / abs(PERbase);
        }

        PERpotenza = 1;
        for (PERconta = 0; PERconta < PEResponente; PERconta++)
        {
            PERtemp = 0;
            for (PERindice = 0; PERindice < abs(PERbase); PERindice++)
            {
                PERtemp += PERpotenza;
            }
            PERpotenza = PERtemp;
        }

        PERpotenza *= PERsegno;
    }

    if(PEResponente < 0)
    {
        cout << PERbase << " elevato alla " << PEResponente << " è uguale a 1/" << PERpotenza << "." << endl;
    } else
    {
        cout << PERbase << " elevato alla " << PEResponente << " è uguale a " << PERpotenza << "." << endl;
    }
    return 0;
}
