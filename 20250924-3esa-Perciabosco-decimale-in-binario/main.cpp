/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250924-3esa-Perciabosco-decimale-in-binario"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
  long long decimale;
  unsigned long long binario = 0;
  int indice, cifra, segno;
  cout << "Inserisci un numero decimale" << endl;
  cin >> decimale;

  segno = decoimale/abs(decimale);
  decimale = abs(decimale);    
  for (indice = 0; decimale > 0; indice++) {
    cifra = decimale % 2;
    binario += cifra * pow(10, indice);
    decimale = (decimale - cifra) / 2;
  }
  decimale *= segno;
  
  cout << "Il numero decimale " << decimale << " è rappresentato in binario con " << binario << "." << endl;
  return 0;
}
