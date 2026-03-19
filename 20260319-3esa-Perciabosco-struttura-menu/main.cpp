/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione: struttura menù e gestione temperature medie
*/

#include <iostream>
#include <sstream>
#include <cstdlib>
using namespace std;

int fncmenu() // funzione di visualizzazione menù
{
    int dato;
    cout << "*******************************************" << endl;
    cout << "*         CALCOLO TEMPERATURE MEDIE       *" << endl;
    cout << "*******************************************" << endl;
    cout << "*                Menù utente              *" << endl;
    cout << "*  1 Inserimento dati                     *" << endl;
    cout << "*  2 Azzeramento dati                     *" << endl;
    cout << "*  3 Visualizzazione medie                *" << endl;
    cout << "*  0 USCITA                               *" << endl;
    cout << "*******************************************" << endl;
    cin >> dato;
    return dato;
}

// funzione per acquisire le temperature
void subleggidati(double &temp1, double &temp2, int &conta1, int &conta2)
{
    int codicecomune;
    double lettura;
    do
    {
        cout << "Inserisci il codice del comune: ";
        cin >> codicecomune;

        if ((codicecomune == 1) || (codicecomune == 2))
        {
            cout << "Inserisci la temperatura: ";
            cin >> lettura;

            if (codicecomune == 1)
            {
                temp1 += lettura;
                conta1++;
            }
            else
            {
                temp2 += lettura;
                conta2++;
            }
        }
        else
        {
            if (codicecomune != 0)
            {
                cout << "Codice comune non valido, inserisci 1 o 2" << endl;
                cout << "oppure 0 per terminare rilevamento temperature." << endl;
            }
        }

    } while (codicecomune != 0);
}

// funzione per azzerare i dati
void subazzeradati(double &temp1, double &temp2, int &conta1, int &conta2)
{
    temp1 = 0;
    temp2 = 0;
    conta1 = 0;
    conta2 = 0;
    cout << "Azzeramento effettuato" << endl;
}

// funzione per visualizzare le medie
void subelaboradati(double temp1, double temp2, int conta1, int conta2)
{
    double media1, media2;
    stringstream msg;

    if (conta1 > 0)
    {
        media1 = temp1 / conta1;
        msg << "La media delle temperature del codice comune 1 e' " << media1 << endl;
    }
    else
    {
        msg << "Non sono state rilevate temperature per il codice comune 1." << endl;
    }

    if (conta2 > 0)
    {
        media2 = temp2 / conta2;
        msg << "La media delle temperature del codice comune 2 e' " << media2 << endl;
    }
    else
    {
        msg << "Non sono state rilevate temperature per il codice comune 2." << endl;
    }

    cout << msg.str();
}

int main()
{
    // fase di dichiarazione delle variabili
    int scelta, contatlet1, contatlet2;
    double sommatemp1, sommatemp2;
    subazzeradati(sommatemp1, sommatemp2, contatlet1, contatlet2);
    system("clear");
    do
    {
        scelta = fncmenu();
        cout << endl;
        switch (scelta)
        {
            case 1:
            {
                subleggidati(sommatemp1, sommatemp2, contatlet1, contatlet2);
                break;
            }
            case 2:
            {
                system("clear");
                subazzeradati(sommatemp1, sommatemp2, contatlet1, contatlet2);
                break;
            }
            case 3:
            {
                subelaboradati(sommatemp1, sommatemp2, contatlet1, contatlet2);
                break;
            }
            default:
            {
                if (scelta != 0)
                {
                    cout << "Inserisci uno di questi valori 0,1,2,3";
                }
            }
        }
        cout << endl;
        cout << endl;
    } while (scelta != 0);
    cout << "Programma terminato" << endl;
    return 0;
}