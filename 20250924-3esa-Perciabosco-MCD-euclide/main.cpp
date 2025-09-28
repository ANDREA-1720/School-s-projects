/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250924-3esa-Perciabosco-MCD-Euclide"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int min, max, comodo;
  cout << "Inserisci il primo numero" << endl;
  cin >> min;
  cout << "Inserisci il secondo numero" << endl;
  cin >> max;

  if (min > max) {
    comodo = min;
    min = max;
    max = comodo;
  }

  comodo = 0;
  do {
    comodo = max % min;
    max = min;
    min = comodo;
  } while (comodo != 0);

  cout << "Il Massimo Comune Divisore tra i due numeri è " << max << endl;
  return 0;
}
