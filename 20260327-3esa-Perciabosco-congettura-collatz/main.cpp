/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione: "20260327-3esa-Perciabosco-congettura-collatz"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, steps = 0;
    cout << "Inserisci un numero: ";
    cin >> num;
    num = abs(num);

    if(num == 0) {
        cout << "0 non è un numero valido." << endl;
        num = 1;
    }

    while (num != 1)
    {
        if(num % 2 == 0){
            num/=2;
        } else {
            num = 3 * num + 1;
        }
        
        steps++;
    }

    if(steps != 0){
        cout << "Il numero di passi necessari per arrivare a 1 è: " << steps << endl;
    }
    return 0;
}
