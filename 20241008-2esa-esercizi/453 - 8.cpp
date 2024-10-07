/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Date le lunghezze dei lati di un triangolo, stabilisce se il triangolo è equilatero, isoscele o scaleno."
*/

#include <iostream>

using namespace std;

int main()
{
    double lat1, lat2, lat3;
    cout << "Inserisci la lunghezza del primo lato: ";
    cin >> lat1;
    cout << "Inserisci la lunghezza del secondo lato: ";
    cin >> lat2;
    cout << "Inserisci la lunghezza del terzo lato: ";
    cin >> lat3;

    if (lat1 == lat2 && lat2 == lat3)
        cout << "Il triangolo è equilatero." << endl;
    else if (lat1 == lat2 || lat2 == lat3 || lat3 == lat1)
        cout << "Il triangolo è isoscele." << endl;
    else
        cout << "Il triangolo è scaleno." << endl;
    return 0;
}