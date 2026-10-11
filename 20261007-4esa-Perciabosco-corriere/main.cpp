/*
    Autore: Andrea Perciabosco
    Classe: 4ESA
    Descrizione: "20261007-4esa-Perciabosco-corriere"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int indice, pacchi;
    double pesoTotale = 0, costo, supplemento;

    cout << "Inserisci il numero di pacchi da spedire: " << endl;
    cin >> pacchi;

    double pesi[pacchi];

    for(indice = 0; indice < pacchi; indice++){
        cout << "Inserisci il peso del pacco numero " << indice + 1 << ": " << endl;
        cin >> pesi[indice];
        pesoTotale += pesi[indice];
    }
    costo = pesoTotale * 3;

    cout << "Il peso totale e' di " << pesoTotale << " kg." << endl;
    cout << "Il costo della spedizione e' di " << costo << " euro." << endl;

    if(pesoTotale > 20){
        supplemento = costo * 0.15;
        cout << "Il peso totale supera i 20 kg, quindi si applica il supplemento del 15%." << endl;
    } else {
        supplemento = costo * 0.05;
        cout << "Il peso totale non supera i 20 kg, quindi si applica il supplemento del 5%." << endl;
    }

    cout << "Il supplemento e' di " << supplemento << " euro." << endl;
    cout << "Il costo finale da pagare e' di " << costo + supplemento << " euro." << endl;

    return 0;
}
