#include <iostream>

using namespace std;

void imprime_n_ate_1(int n);

int main() {
  int n;
  cin >> n;
  imprime_n_ate_1(n);
}

void imprime_n_ate_1(int n) {
  if(n < 1){
    return;
  }
  cout << n << endl;
  imprime_n_ate_1(n-1);
}