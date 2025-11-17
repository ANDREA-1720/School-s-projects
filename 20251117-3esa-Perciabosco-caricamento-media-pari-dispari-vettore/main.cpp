/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione:
   "20251117-3esa-Perciabosco-caricamento-media-pari-dispari-vettore"
*/

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand((unsigned)time(NULL));
  int indice, dati, min, max, contaPari = 0, contaDispari = 0, comodo;
  double mediaPari = 0, mediaDispari = 0;
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
  for (indice = 0; indice < dati; indice++) {
    comodo = rand() % (max - min + 1) + min;
    vetdati[indice] = comodo;
    cout << "Dato in posizione " << indice << " di valore " << comodo << endl;
    if(comodo % 2 == 0){
      mediaPari += comodo;
      contaPari++;
    } else {
      mediaDispari += comodo;
      contaDispari++;
    }
  }

  if(contaPari != 0){ 
    mediaPari /= contaPari;
    cout << "La media dei numeri pari è " << mediaPari << "." << endl;
  } else {
    cout << "Non sono presenti numeri pari." << endl;
  }

  if(contaDispari != 0){ 
    mediaDispari /= contaDispari;
    cout << "La media dei numeri pari è " << mediaDispari << "." << endl;
  } else {
    cout << "Non sono presenti numeri pari." << endl;
  }

  return 0;
}
