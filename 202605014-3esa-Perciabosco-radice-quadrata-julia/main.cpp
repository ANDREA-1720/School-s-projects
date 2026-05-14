 /*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione: "202605014-3esa-Perciabosco-radice-quadrata-julia"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int tmp = 0, base = 0, num, indice;
    double scarto, aumento, risultato;

    cout << "Inserisci il numero: " << endl;
    cin >> num;

    num = abs(num);

    while(base <= num)
    {
        tmp++;
        base = tmp * tmp;
    }

    tmp--;
    base = tmp * tmp;

    scarto = num - base;

    aumento = scarto / (2.0 * tmp);

    for(indice = 0; indice < 5; indice++)
    {
        aumento = scarto / (2.0 * tmp + aumento);
    }

    risultato = tmp + aumento;

    cout << endl;
    cout << "Quadrato perfetto vicino: " << base << endl;
    cout << "Base della radice: " << tmp << endl;
    cout << "Scarto: " << scarto << endl;
    cout << "Radice approssimata: " << risultato << endl;

    return 0;
}