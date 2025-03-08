#pragma once

using namespace std;

struct Pessoa {
  string nome;
  int idade;
};

string pessoa_to_string(Pessoa p);