/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250924-3esa-Perciabosco-caricamento-statico-vettore-rand-def"
*/

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand((unsigned)time(NULL));
  int indice, vetdati[10];

  for (indice = 0; indice < 10; indice++) {
    vetdati[indice] = rand() % 100 + 1;
    cout << "Dato in posizione " << indice << " di valore " << vetdati[indice] << endl;
  }
  
  return 0;
}
