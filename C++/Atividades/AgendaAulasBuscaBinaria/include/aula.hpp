#pragma once
using namespace std;

struct aula {
  int hora;
  int minuto;
  string disci;
};

int VeriAula(aula *a, int hora, int minuto, int inicio, int fim);