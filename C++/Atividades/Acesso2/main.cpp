#include <iostream>

using namespace std;

int main() {
  int x;
  cin >> x;
  int numeros[5] = {-8, 4, -2, 0, 1};
  string palavras[5] = {"Ola", "A", "Prog", "Mundo", "hm"};
  string y = palavras[x];
  cout << numeros[x] << endl << palavras[x] << endl << y.size() << endl;
}