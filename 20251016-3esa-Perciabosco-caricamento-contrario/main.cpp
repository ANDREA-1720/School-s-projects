/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione: "20251016-3esa-Perciabosco-caricamento-contrario"
*/

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  srand((unsigned)time(NULL));
  int indice/*=0*/, indice2 ,comodo, dati, min, max, cifra;
  cout << "Inserisci la quantità di dati da generare" << endl;
  cin >> dati;
  cout << "Inserisci il valore minimo dei dati da generare" << endl;
  cin >> min;
  cout << "Inserisci il valore massimo dei dati da generare" << endl;
  cin >> max;
  int vetnum1[dati];
  int vetcont[dati];

  dati=abs(dati);
  if(max<min){
      min = min + max;
      max = min - max;
      min = min - max;
  }

  for (indice = 0; indice < dati; indice++) { //while(indice<dati){
    comodo = rand() % (max - min + 1) + min;
    vetnum1[indice] = comodo;
    vetcont[indice] = 0;
    // indice2 = 0;
    for(indice2 = 0; comodo != 0; indice2++){ //while(comodo != 0){
      cifra = comodo % 10;
      vetcont[indice] = vetcont[indice] * 10 + cifra;
      comodo /= 10;
      //indice2++
    }
    cout << "Il valore in posizione " << indice << " è " << vetnum1[indice] << " che al contrario è scritto " << vetcont[indice] << "." << endl;
    //indice++;
  }

  return 0;
}
