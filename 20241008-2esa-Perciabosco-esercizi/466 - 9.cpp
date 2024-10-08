/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Indica il nome del giorno della settimana dal suo numero."
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    string giorni[] = {"Domenica", "Lunedì", "Martedì", "Mercoledì", "Giovedì", "Venerdì", "Sabato"};

    cout << "Inserisci il numero del giorno della settima: ";
    cin >> num;

    if (num < 1 || num > 7)
    {
        cout << "Inserisci un numero compreso tra 1 e 7!" << endl;
        return 1;
    }

    cout << "Il " << num << "° giorno della settimana è " << (num == 1 ? "la " : "il ") << giorni[num - 1] << "." << endl;

    return 0;
}
