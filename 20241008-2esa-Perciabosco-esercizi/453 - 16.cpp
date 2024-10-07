/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Date le lunghezze dei lati di un triangolo, calcola area e perimetro del triangolo se equilatero"
*/

#include <iostream>

using namespace std;

int main()
{
    double lat1, lat2, lat3, area, perimetro;
    cout << "Inserisci la lunghezza del primo lato: ";
    cin >> lat1;
    cout << "Inserisci la lunghezza del secondo lato: ";
    cin >> lat2;
    cout << "Inserisci la lunghezza del terzo lato: ";
    cin >> lat3;

    if (lat1 == lat2 && lat2 == lat3)
    {
        perimetro = lat1 * 3;
        area = (lat1 * lat1) * (sqrt(3) / 4);
        cout << "L'area del triangolo è: " << area << ", mentre il perimetro è: " << perimetro << "." << endl;
    }
    else
        cout << "Il triangolo non è equilatero." << endl;
    return 0;
}