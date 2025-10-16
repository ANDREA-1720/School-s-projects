/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione: "20250924-3esa-Perciabosco-caricamento-statico-vettore-def"
*/

#include <iostream>

using namespace std;

int main() {
  int indice, vetdati[10];
  cout << "Inserisci ogni valore dei 10 e premi invio" << endl;

  for (indice = 0; indice < 10; indice++) {
    cin >> vetdati[indice];
    cout << "Dato in posizione " << indice << " di valore " << vetdati[indice] << endl;
  }
  
  return 0;
}
