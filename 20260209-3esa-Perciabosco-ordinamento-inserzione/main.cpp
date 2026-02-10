/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione: "20260209-3esa-Perciabosco-ordinamento-inserzione"
*/

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  srand((unsigned)time(NULL));
  int indice/*=0*/, indice2 ,comodo, temp, dati, min, max;
  cout << "Inserisci la quantità di dati da generare" << endl;
  cin >> dati;
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

  dati=abs(dati);
  if(max<min){
    min = min + max;
    max = min - max;
    min = min - max;
  }

  for (indice = 0; indice < dati; indice++) {
    comodo = rand() % (max - min + 1) + min;
    for(indice2 = 0; indice2 < indice; indice2++){
      if(comodo < vetnum[indice2]){
        break;
      }
    }

    for(temp = dati; temp > indice2; temp--){
      vetnum[temp] = vetnum[temp-1];
    }
    vetnum[indice2] = comodo;
  }

  for(indice = 0; indice < dati; indice++){
    cout << "Il valore in posizione " << indice + 1 << " è " << vetnum[indice] << "." << endl;
  }

  return 0;
}
