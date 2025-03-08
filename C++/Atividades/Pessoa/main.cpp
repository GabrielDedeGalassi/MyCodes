#include <iostream>
#include "include/pessoa.hpp"

using namespace std;

int main() {
  Pessoa p1;
  cin >> p1.nome;
  cin >> p1.idade;
  cout << pessoa_to_string(p1) << endl;
}