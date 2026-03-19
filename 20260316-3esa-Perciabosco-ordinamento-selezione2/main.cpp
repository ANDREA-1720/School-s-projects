/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione: "20260316-3esa-Perciabosco-ordinamento-selezione2"
*/

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  srand((unsigned)time(NULL));
  int indice, indice2, comodo, dati, min, max, posmin, index;
  bool duplicato;
  cout << "Inserisci la quantità di dati da generare" << endl;
  cin >> dati;
  do {
    cout << "Inserisci il valore minimo dei dati da generare" << endl;
    cin >> min;
    cout << "Inserisci il valore massimo dei dati da generare" << endl;
    cin >> max;
    if (abs(max - min) + 1 < dati) {
      cout << "Intervallo non valido, non è abbastanza grade per riempire il vettore con soli numeri distinti." << endl;
    }
  } while (abs(max - min) + 1 < dati);
  int vetnum[dati];

  dati = abs(dati);
  if (max < min) {
    comodo = max;
    max = min;
    min = comodo;
  }

  cout << "Vettore non ordinato:" << endl;
  for (indice = 0; indice < dati; indice++) {
    duplicato = false;
    do {
      comodo = rand() % (max - min + 1) + min;
      duplicato = false;
      for (indice2 = 0; indice2 < indice; indice2++) {
        if (vetnum[indice2] == comodo) {
          duplicato = true;
          break;
        }
      }
    } while (duplicato);

    vetnum[indice] = comodo;
    cout << "Il valore in posizione " << indice + 1 << " è " << vetnum[indice] << "." << endl;
  }

  for (indice = 0; indice < dati - 1; indice++) {
    posmin = indice;
    for (index = indice + 1; index < dati; index++) {
      if (vetnum[index] < vetnum[posmin]) {
        posmin = index;
      }
    }
    if (posmin != indice) {
      comodo = vetnum[indice];
      vetnum[indice] = vetnum[posmin];
      vetnum[posmin] = comodo;
    }
  }

  cout << "Vettore ordinato:" << endl;
  for (indice = 0; indice < dati; indice++) {
    cout << "Il valore in posizione " << indice + 1 << " è " << vetnum[indice] << "." << endl;
  }

  return 0;
}