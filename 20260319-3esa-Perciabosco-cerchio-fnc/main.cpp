/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: acquisito il raggio, calcolare perimetro e area di un cerchio con le funzioni
*/

#include <iostream>
#include <math.h>
#include <sstream>

using namespace std;

// funzione per acquisire il raggio
int fncleggidati()
{
    int dato;
    dato = 0;

    do
    {
        cout << "Inserisci il raggio" << endl;
        cin >> dato;

        if ((dato <= 0) || (dato > 999))
        {
            cout << "Inserisci un valore compreso tra 1 e 999" << endl;
        }
    } while ((dato <= 0) || (dato > 999));

    return dato;
}

// funzione per calcolare la circonferenza
double fncperimetro(int raggio2) // raggio2 parametro formale
{
    double num1;
    num1 = 2 * raggio2 * 3.1415;
    return num1;
}

// funzione per calcolare l'area
double fncarea(int raggio3)
{
    double num1;
    num1 = raggio3 * raggio3 * 3.1415;
    return num1;
}

int main()
{
    // fase di dichiarazione delle variabili
    int raggio;
    double perimetro, area;
    stringstream msg;

    // fase di acquisizione
    raggio = fncleggidati();

    // fase di elaborazione
    perimetro = fncperimetro(raggio); // raggio parametro attuale
    area = fncarea(raggio);

    // fase di comunicazione dei risultati
    msg << "La circonferenza del cerchio dal raggio: " << raggio << endl;
    msg << "è uguale a " << perimetro << endl;
    msg << "e l'area e' uguale a " << area << endl;

    cout << msg.str();

    return 0;
}