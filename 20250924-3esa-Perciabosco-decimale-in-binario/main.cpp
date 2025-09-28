/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250924-3esa-Perciabosco-decimale-in-binario"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int decimale, binario = 0, indice;
  cout << "Inserisci un numero decimale" << endl;
  cin >> decimale;

  for (indice = 0; decimale > 0; indice++) {
    binario += (decimale % 2) * pow(10, indice);
    decimale = decimale / 2;
  }
  
  cout << "Il numero decimale " << decimale << " è rappresentato in binario con " << binario << endl;
  return 0;
}
