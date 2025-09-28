/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250924-3esa-Perciabosco-caricamento-statico-vettore-pre"
*/

#include <iostream>

using namespace std;

int main() {
  int indice = 0, vetdati[10];
  cout << "Inserisci ogni valore dei 10 e premi invio" << endl;

  while (indice < 10) {
    cin >> vetdati[indice];
    cout << "Dato in posizione " << indice << " di valore " << vetdati[indice] << endl;
    indice++;
  }
  return 0;
}
