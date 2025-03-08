#include <iostream>

using namespace std;

int menor_maior(int *x, int *y) {
  int menor;
  if (*x > *y) {
    menor = *y;
    *y = *x;
  } else if (*x < *y) {
    menor = *x;
    *x = *y;
  } else if (*x == *y) {
    menor = *y;
  }
  return menor;
}

int main() {
  int num1, num2;

  cin >> num1 >> num2;

  int menor = menor_maior(&num1, &num2);

  cout << "menor: " << menor << endl;
  cout << "num1: " << num1 << endl;
  cout << "num2: " << num2 << endl;
}