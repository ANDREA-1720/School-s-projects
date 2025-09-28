/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250924-3esa-Perciabosco-caricamento-statico-vettore-rand-pre"
*/

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand((unsigned)time(NULL));
  int indice = 0, vetdati[10];

  while (indice < 10) {
    vetdati[indice] = rand() % 100 + 1;
    cout << "Dato in posizione " << indice << " di valore " << vetdati[indice] << endl;
    indice++;
  }
  return 0;
}
