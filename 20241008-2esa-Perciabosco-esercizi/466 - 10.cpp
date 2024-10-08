/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Indica il nome del giorno della nano di Biancaneve dal suo numero."
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    string nani[] = {"Pisolo", "Brontolo", "Cucciolo", "Eolo", "Mammolo", "Gongolo", "Dotto"};

    cout << "Inserisci il numero del nano di Biancaneve: ";
    cin >> num;

    if (num < 1 || num > 7)
    {
        cout << "I nani sono sette! Forse intendevi Biancaneve?" << endl;
        return 0;
    }

    cout << "Il " << num << "° nano di Biancaneve si chiama " << nani[num - 1] << "." << endl;

    return 0;
}
