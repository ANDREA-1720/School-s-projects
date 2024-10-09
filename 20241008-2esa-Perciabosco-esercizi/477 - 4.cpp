/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "Ordina 4 numeri in ordine crescente o decrescente in base alla richiesta dell utente."
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4;
    string tipo;

    cout << "Scrivi 'crescente' o 'decrescente' per ordinare i numeri nel corrispettivo ordine: ";
    cin >> tipo;

    if (tipo != "crescente" && tipo != "decrescente")
    {
        cout << "Tipo di ordinamento non valido!" << endl;
        return 1;
    }

    cout << "Inserisci il primo numero: ";
    cin >> num1;
    cout << "Inserisci il secondo numero: ";
    cin >> num2;
    cout << "Inserisci il terzo numero: ";
    cin >> num3;
    cout << "Inserisci il quarto numero: ";
    cin >> num4;

    if (tipo == "crescente")
    {
        num2 = num1 + num2;
        num1 = (num1 + (num2 - num1) - abs(num1 - (num2 - num1))) / 2;
        num2 = num2 - num1;

        num3 = num2 + num3;
        num2 = (num2 + (num3 - num2) - abs(num2 - (num3 - num2))) / 2;
        num3 = num3 - num2;

        num4 = num3 + num4;
        num3 = (num3 + (num4 - num3) - abs(num3 - (num4 - num3))) / 2;
        num4 = num4 - num3;

        num2 = num1 + num2;
        num1 = (num1 + (num2 - num1) - abs(num1 - (num2 - num1))) / 2;
        num2 = num2 - num1;

        num3 = num2 + num3;
        num2 = (num2 + (num3 - num2) - abs(num2 - (num3 - num2))) / 2;
        num3 = num3 - num2;

        num4 = num3 + num4;
        num3 = (num3 + (num4 - num3) - abs(num3 - (num4 - num3))) / 2;
        num4 = num4 - num3;

        num2 = num1 + num2;
        num1 = (num1 + (num2 - num1) - abs(num1 - (num2 - num1))) / 2;
        num2 = num2 - num1;
    }
    else
    {
        num1 = num2 + num1;
        num2 = (num2 + (num1 - num2) - abs(num2 - (num1 - num2))) / 2;
        num1 = num1 - num2;

        num2 = num3 + num2;
        num3 = (num3 + (num2 - num3) - abs(num3 - (num2 - num3))) / 2;
        num2 = num2 - num3;

        num3 = num4 + num3;
        num4 = (num4 + (num3 - num4) - abs(num4 - (num3 - num4))) / 2;
        num3 = num3 - num4;

        num1 = num2 + num1;
        num2 = (num2 + (num1 - num2) - abs(num2 - (num1 - num2))) / 2;
        num1 = num1 - num2;

        num2 = num3 + num2;
        num3 = (num3 + (num2 - num3) - abs(num3 - (num2 - num3))) / 2;
        num2 = num2 - num3;

        num3 = num4 + num3;
        num4 = (num4 + (num3 - num4) - abs(num4 - (num3 - num4))) / 2;
        num3 = num3 - num4;

        num1 = num2 + num1;
        num2 = (num2 + (num1 - num2) - abs(num2 - (num1 - num2))) / 2;
        num1 = num1 - num2;
    }

    cout << "I numeri in ordine " << tipo << " sono: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << "." << endl;
    return 0;
}