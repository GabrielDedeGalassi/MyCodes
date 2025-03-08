#include <iostream>
#include "../include/pessoa.hpp"

using namespace std;

string pessoa_to_string(Pessoa p){
  string x = p.nome + ", " + to_string(p.idade);
  return x;
}