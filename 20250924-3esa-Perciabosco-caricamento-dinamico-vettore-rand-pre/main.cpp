/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione: "20250924-3esa-Perciabosco-caricamento-statico-vettore-rand-pre"
*/

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand((unsigned)time(NULL));
  int indice = 0, dati, min, max;
  cout << "Inserisci la quantità di dati da generare" << endl;
  cin >> dati;
  cout << "Inserisci il valore minimo dei dati da generare" << endl;
  cin >> min;
  cout << "Inserisci il valore massimo dei dati da generare" << endl;
  cin >> max;
  int vetdati[dati];

  dati=abs(dati);
  if(max<min){
      min = min + max;
      max = min - max;
      min = min - max;
  }
  while (indice < dati) {
    vetdati[indice] = rand() % (max - min + 1) + min;
    cout << "Dato in posizione " << indice + 1 << " di valore " << vetdati[indice]
         << endl;
    indice++;
  }

  return 0;
}
