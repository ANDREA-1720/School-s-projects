/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione: "20260327-3esa-Perciabosco-congettura-collatz-ricorsivo"
*/

#include <iostream>
#include <math.h>

using namespace std;

int standard(long long num, long long steps) {
    while (num != 1)
    {
        if(num % 2 == 0){
            num/=2;
        } else {
            num = 3 * num + 1;
        }
        
        steps++;
    }

    return steps;
}

int ricorsiva(long long num, long long steps) {
    if(steps > 10000) {
        steps = standard(num, steps);
    } else {
        if (num != 1) {
            if (num % 2 == 0) {
                steps = ricorsiva(num / 2, steps + 1);
            } else {
                steps = ricorsiva(3 * num + 1, steps + 1);
            }
        }
    }
    return steps;   
}

int main()
{
    long long num, steps = 1;
    cout << "Inserisci un numero: ";
    cin >> num;
    num = abs(num);

    if(num == 0) {
        cout << "0 non è un numero valido." << endl;
    } else {
        cout << "Il numero di passi necessari per arrivare a 1 è: " << ricorsiva(num, steps) << endl;
    }

    return 0;
}
