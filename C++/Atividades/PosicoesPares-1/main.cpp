#include <iostream>

using namespace std;

void posicoes_pares(string str) {
  string s;
  int tamanho = str.size();
  for (int n = 0; n < tamanho; n++){
    if (n%2 == 0) {
      s += str.at(n);
    }   
  }
  cout << s << endl;
}

int main() {
  string palavra;
  cin >> palavra;
  posicoes_pares(palavra); 
}