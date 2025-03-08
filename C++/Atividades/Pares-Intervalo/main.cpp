#include <iostream>

using namespace std;

void imprime_pares(int, int);

int main() {
  int x, y;
  cin >> x, cin >> y;
  imprime_pares(x, y);
}

void imprime_pares(int x, int y){
  if(x > y){
    return;
  }
  if(x%2 == 0)
    cout << x << endl;
  imprime_pares(x+1, y);
}