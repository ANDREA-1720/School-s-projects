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
    int livello, num, punteggio = 0, min, max, coeffA, coeffB;
    double risposta, soluzione;
    srand(static_cast<unsigned>(time(0)));
    
    cout << "Inserisci il livello da 1 a 3: " << endl;
    cin >> livello;
    cout << "Inserisci il numero di equazioni da risolvere (compreso tra 1 e 20): " << endl;
    cin >> num;

    if(livello < 1 || livello > 3)
    {
        cout << "Inserisci un livello compreso tra 1 e 3" << endl;
        return 1;
    }

    num = abs(num);
    if(num > 20)
    {
        cout << "Numero equazioni impostato a 5" << endl;
        num = 5;
    }

    if (livello == 1) {
        max = 99;
        min = 1;
    } else if (livello == 2) {
        max = 9999;
        min = 100;
    } else {
        max = 999999;
        min = 10000;
    }

    for(int i = 0; i < num; i++){
        coeffA = rand() % (max - min + 1) + min;
        coeffB = rand() % (max - min + 1) + min;
        cout << "(arrotondando a due decimali)" << endl;
        cout << "Inserisci la soluzione per l' equazione " << coeffA << "x = " << coeffB << ": " << endl;
        cin >> risposta;

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
