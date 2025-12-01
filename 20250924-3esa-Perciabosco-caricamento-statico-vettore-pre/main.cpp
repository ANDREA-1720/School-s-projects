/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione: "20250924-3esa-Perciabosco-caricamento-statico-vettore-pre"
*/

#include <iostream>

using namespace std;

int main() {
  int indice = 0, vetdati[10];
  cout << "Inserisci ogni valore dei 10 e premi invio" << endl;

  while (indice < 10) {
    cin >> vetdati[indice];
    cout << "Dato in posizione " << indice + 1 << " di valore " << vetdati[indice] << endl;
    indice++;
  }
  
  return 0;
}
