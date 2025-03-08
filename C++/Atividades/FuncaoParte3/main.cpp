#include <iostream>

using namespace std;

void troca (int *x, int *y){
  int aux;
  aux = *x;
  *x = *y;
  *y = aux;
}

int main() {
  int n1, n2;

  cin >> n1;
  cin >> n2;

  troca(&n1, &n2);

  cout << n1 << endl;
  cout << n2 << endl;
}