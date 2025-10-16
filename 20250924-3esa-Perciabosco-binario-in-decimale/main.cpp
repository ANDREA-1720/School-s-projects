/*
    Autore: Andrea Perciabosco
    Classe: 3ESA
    Descrizione: "20250924-3esa-Perciabosco-binario-in-decimale"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int indice, cifra, segno;
  long long binario, decimale = 0;
  cout << "Inserisci un numero binario" << endl;
  cin >> binario;

  segno = binario/abs(binario);
  for (indice = 0; binario > 0; indice++) {
    cifra = binario % 10;
    if(cifra>1) {
        cout << "Il numero inserito non è stato corretamente inserito in binario." << endl;
        return 1;
    }
    decimale += cifra * pow(2, indice);
    binario = (binario - cifra) / 10;
  }
  decimale *= segno;

  cout << "Il numero è rappresentato in decimale con " << decimale << "." << endl;
  return 0;
}
