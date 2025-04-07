/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250412-2esa-Perciabosco-quiz01C"
*/

#include <iostream>
#include <math.h>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
    int livello, num, punteggio = 0, minA, maxA, minB, maxB, coeffA, coeffB;
    double risposta, soluzione;
    srand(static_cast<unsigned>(time(0)));
    
    cout << "Inserisci il livello da 1 a 3: " << endl;
    cin >> livello;
    cout << "Inserisci il numero di equazioni da risolvere: " << endl;
    cin >> num;

    if(livello < 1 || livello > 3)
    {
        cout << "Inserisci un numero compreso tra 1 e 3" << endl;
        return 1;
    }

    if(livello == 1)
    {
        minA = 1;
        minB = 1;
        maxA = 9;
        maxB = 9;
    } else if(livello == 2)
    {
        minA = -9;
        minB = -9;
        maxA = 9;
        maxB = 9;
    } else if(livello == 3)
    {
        minA = -99;
        minB = -99;
        maxA = 99;
        maxB = 99;
    }

    for(int i = 0; i < num; i++){
        coeffA = rand() % (maxA - minA + 1) + minA;
        coeffB = rand() % (maxB - minB + 1) + minB;
        cout << "(arrotondando a due decimali)" << endl;
        cout << "Inserisci la soluzione per la equazione " << coeffA << "x = " << coeffB << ": " << endl;
        cin >> risposta;

        if (coeffA == 0)
        {
            if (coeffB == 0)
            {
                cout << "L'equazione è indeterminata." << endl;
            }
            else
            {
                cout << "L'equazione è impossibile." << endl;
            }
            num--;
        }

        soluzione = static_cast<double>(coeffB) / coeffA;
        soluzione = round(soluzione * 100) / 100;
        
        if(abs(risposta - soluzione) < 0.01)
        {
            punteggio++;
            cout << "La soluzione è corretta." << endl;
        } else {
            cout << "La soluzione è sbagliata. La risposta corretta è " << fixed << setprecision(2) << soluzione << endl;
        }
        cout << "Il tuo punteggio è di " << punteggio << "/" << num << endl;
        cout << endl;
    }

    cout << "Complimenti per il punteggio totale di " << punteggio << "/" << num << "." << endl;
    return 0;
}
