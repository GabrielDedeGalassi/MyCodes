#include <iostream>

using namespace std;

int main() {
  bool b;
  char c;
  int i;
  double d;
  int cont = 0;
  cin >> b;
  cin >> c;
  cin >> i;
  cin >> d;
  if (b != false) {
    cont += 1;
  }
  if (c != 'A') {
    cont += 1;
  }
  if (i != 2) {
    cont += 1;
  }
  if (d != 1.5) {
    cont += 1;
  }
  cout << cont << endl;
  if (b != false) {
    cout << b << endl;;
  }
  if (c != 'A') {
    cout << c << endl;
  }
  if (i != 2) {
    cout << i << endl;
  }
  if (d != 1.5) {
    cout << d << endl;
  }
}