/*
    Autore: Andrea Perciabosco
    Classe: 4ESA
    Descrizione: "20260926-4esa-Perciabosco-triangolo"
*/

#include <iostream>
#include <math.h>

using namespace std;

double ipotenusa(double cat1, double cat2){
    return sqrt((cat1*cat1) + (cat2*cat2));
}

double perimetro(double lat1, double lat2, double lat3){
    return lat1 + lat2 + lat3;
}

double area(double base, double alt){
    return base*alt/2;
}

int main()
{
    double cat1, cat2;
    cout << "Inserisci il primo cateto del triangolo: " << endl;
    cin >> cat1;
    cout << "Inserisci il primo cateto del triangolo: " << endl;
    cin >> cat2;

    double ipt = ipotenusa(cat1, cat2);

    cout << "L'ipotenusa del triangolo inserito è " << ipt << "."<< endl;
    cout << "Il perimetro del triangolo inserito è " << perimetro(cat1, cat2, ipt) << "." << endl;
    cout << "L'area del triangolo inserito è " << area(cat1, cat2) << "." << endl;
    return 0;
}
