#include <iostream>

using namespace std;

int conta_digitos(int n);

int main() {
  int numero;
  cin >> numero;
  cout << conta_digitos(numero) << endl;
}

int conta_digitos(int n) {
  if (n == 0) {
    return 0;
  }
  return 1+conta_digitos(n/10);
}