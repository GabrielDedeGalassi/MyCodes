#include <iostream>

using namespace std;

void imprime_1_ate_n(int atual, int max);

int main() {
  int x;
  cin >> x;
  imprime_1_ate_n(1, x);
}

void imprime_1_ate_n(int atual, int max){
  if(atual > max){
    return;
  }
  cout << atual << endl;
  imprime_1_ate_n(atual+1, max);
}