#include <iostream>

using namespace std;

int main() {
  int x, y = 0, soma = 0;
  cin >> x;
  while(x > 0){
    cin >> y;
    soma += y;
    x--;
  }
  cout << soma << endl;
}