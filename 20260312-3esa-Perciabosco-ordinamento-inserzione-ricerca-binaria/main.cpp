/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione: "20260312-3esa-Perciabosco-ordinamento-inserzione-ricerca-binaria"
*/

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  srand((unsigned)time(NULL));
  int indic, indice2, indice3 ,comodo, temp, dati, min, max, med;
  cout << "Inserisci la quantità di dati da generare" << endl;
  cin >> dati;
  dati=abs(dati);
  do{
    cout << "Inserisci il valore minimo dei dati da generare" << endl;
    cin >> min;
    cout << "Inserisci il valore massimo dei dati da generare" << endl;
    cin >> max;
    if(abs(max-min) < dati){
      cout<<"Intervallo non valido, non è abbastanza grade per riempire il vettore con soli numeri distinti." << endl;
    }
  } while(abs(max-min) < dati);
  int vetnum[dati];

  if(max<min){
    min = min + max;
    max = min - max;
    min = min - max;
  }

for (indice = 0; indice < dati; indice++) {
    comodo = rand() % (max - min + 1) + min;

    indice2 = 0;
    indice3 = indice - 1;
    while (indice2 <= indice3) {
        med = (indice2 + indice3) / 2;
        if(vetnum[med] < comodo) {
            indice2 = med + 1;
				} else {
            indice3 = med - 1;
				}
    }

    for (temp = indice; temp > indice2; temp--){
        vetnum[temp] = vetnum[temp - 1];
		}

    vetnum[indice2] = comodo;
}

  for(indice = 0; indice < dati; indice++){
    cout << "Il valore in posizione " << indice + 1 << " è " << vetnum[indice] << "." << endl;
  }

  return 0;
}
