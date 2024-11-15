/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20241111-2esa-Perciabosco-terna-pitagoricaC"
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Inserisci il primo numero: ";
    cin >> num1;
    cout << "Inserisci il secondo numero: ";
    cin >> num2;
    cout << "Inserisci il terzo numero: ";
    cin >> num3;

	if(num1 == 0 || num2 == 0 || num3 == 0){
		cout << "È stato inserito un numero pari a 0."
		return 1;
	}
    if (((num1 * num1) + (num2 * num2) == num3 * num3) || (num2 * num2) + (num3 * num3) == num1 * num1 || (num1 * num1) + (num3 * num3) == num2 * num2)
        cout << "(" << num1 << ", " << num2 << ", " << num3 << ") è una terna è pitagorica." << endl;
    else
        cout << "(" << num1 << ", " << num2 << ", " << num3 << ") NON è una terna è pitagorica." << endl;
    return 0;
}