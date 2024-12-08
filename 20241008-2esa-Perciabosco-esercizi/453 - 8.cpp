/*
	Autore: Andrea Perciabosco
	Classe: 2ESA
	Descrizione: "20241125-2esa-Perciabosco-tipo-triangoloC"
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
	lat1 = abs(lat1);
	lat2 = abs(lat2);
	lat3 = abs(lat3);
	if (lat1 == 0 || lat2 == 0 || lat3 == 0)
	{
		cout << "E' stato inserito un numero uguale a 0." << endl;
	}
	else if ((lat1 > abs(lat2 - lat3) && lat1 < lat2 + lat3) && (lat2 > abs(lat1 - lat3) && lat2 < lat1 + lat3) && (lat3 > abs(lat2 - lat1) && lat3 < lat2 + lat1))
	{
		if (lat1 == lat2 && lat2 == lat3)
			cout << "Il triangolo è equilatero." << endl;
		else if (lat1 == lat2 || lat2 == lat3 || lat3 == lat1)
			cout << "Il triangolo è isoscele." << endl;
		else
			cout << "Il triangolo è scaleno." << endl;
	}
	else
	{
		cout << "I tre lati non possono formare un triangolo." << endl;
	}
	return 0;
}