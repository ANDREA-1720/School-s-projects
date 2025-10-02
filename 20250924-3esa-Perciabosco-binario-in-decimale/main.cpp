/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250924-3esa-Perciabosco-binario-in-decimale"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int binario, decimale = 0, indice, cifra;
  cout << "Inserisci un numero binario" << endl;
  cin >> binario;

  binario = abs(binario);
  for (indice = 0; binario > 0; indice++) {
    cifra = binario % 10;
    decimale += cifra * pow(2, indice);
    binario = (binario - cifra) / 10;
  }

  cout << "Il numero binario " << binario << " è rappresentato in decimale con " << decimale << "." << endl;
  return 0;
}
