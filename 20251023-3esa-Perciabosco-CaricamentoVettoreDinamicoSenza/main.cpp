/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione: "20251023-3esa-Perciabosco-CaricamentoVettoreDinamicoSenza"
*/

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  srand((unsigned)time(NULL));
  int indice, indice2 ,comodo, dati, min, max, cifra, duplicato;
  cout << "Inserisci la quantità di dati da generare" << endl;
  cin >> dati;
  do{
    cout << "Inserisci il valore minimo dei dati da generare" << endl;
    cin >> min;
    cout << "Inserisci il valore massimo dei dati da generare" << endl;
    cin >> max;
    if(abs(max-min) < dati){
      cout<<"Intervallo non valido, non contiene abbastanza numeri per riempire il vettore con soli numeri distinti." << endl;
    }
  } while(abs(max-min) < dati);
  int vetnum1[dati];

  dati=abs(dati);
  if(max<min){
    min = min + max;
    max = min - max;
    min = min - max;
  }
  
  for (indice = 0; indice < dati; indice++) {
    duplicato = 0;
    comodo = rand() % (max - min + 1) + min;
    for(indice2 = 0; indice2 < indice; indice2++){
      if(vetnum1[indice] == vetnum1[indice2]){
        duplicato = 1;
      }
    }
    vetnum1[indice] = comodo;
    if(duplicato != 0){
      indice--;
    } else {
      cout << "Il valore in posizione " << indice << " è " << vetnum1[indice] << "." << endl;
    }
  }

  return 0;
}
