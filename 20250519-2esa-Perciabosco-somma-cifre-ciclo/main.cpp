/*
    Autore: Andrea Perciabosco
    Classe: 2ESA
    Descrizione: "20250519-classe-Perciabosco-somma-cifre-ciclo"
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int num, cifra, somma = 0;

  cout << "Inserisci un numero: ";
  cin >> num;

  num = abs(num);

  while (num > 0) {
    cifra = num % 10;
    somma += cifra;
    num /= 10;
  }

  cout << "La somma delle cifre  è: " << somma << endl;
  return 0;
}
