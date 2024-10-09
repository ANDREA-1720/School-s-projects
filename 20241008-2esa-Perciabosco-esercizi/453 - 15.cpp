/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Calcola area e perimetro di un quadrato o di un rettangolo."
*/

#include <iostream>

using namespace std;

int main()
{
    double num1, num2, area, perimetro;
    cout << "Inserisci la lunghezza del primo lato: ";
    cin >> num1;
    cout << "Inserisci la lunghezza del secondo lato: ";
    cin >> num2;

    area = num1 * num2;
    perimetro = 2 * (num1 + num2);

    if (num1 == num2)
        cout << "L'area del quadrato è: " << area << ", mentre il perimetro è: " << perimetro << "." << endl;
    else
        cout << "L'area del rettangolo è: " << area << ", mentre il perimetro è: " << perimetro << "." << endl;
    return 0;
}