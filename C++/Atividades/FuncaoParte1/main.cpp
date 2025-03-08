#include <iostream>

using namespace std;

void dobra (int x){
  x*=2;
  cout << x << endl;;
}

int main() {
  int numero;
  cin >> numero;
  dobra(5);
  dobra(numero);
}