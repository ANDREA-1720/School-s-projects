/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250519-classe-Perciabosco-contrario-numero-ciclo"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int num, cifra, contrario = 0, segno;

  cout << "Inserisci un numero: ";
  cin >> num;

  segno = num / abs(num);
  num = abs(num);

  while (num > 0) {
    cifra = num % 10;
    contrario = contrario * 10 + cifra;
    num /= 10;
  }
  contrario *= segno;

  cout << "Il numero contrario è: " << contrario << endl;
  return 0;
}
