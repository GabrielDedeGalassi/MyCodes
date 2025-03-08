#include <iostream>

using namespace std;

int maior (int, int);

int main() {
  int numero1, numero2;

  cin >> numero1 >> numero2;

  int resultado = maior(numero1, numero2);

  cout << resultado << endl; 
}

int maior (int x, int y){
  if (x > y) return x;
  else return y;
}