#pragma once
using namespace std;

struct coordenada {
  double x;
  double y;
};

int getQuadrante(coordenada c);

void conta_quandrantes(coordenada *coordenadas, int n, int *q);