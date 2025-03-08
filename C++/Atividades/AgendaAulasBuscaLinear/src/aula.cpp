#include <iostream>
#include "../include/aula.hpp"
using namespace std;

int VeriAula(aula *a, int hora, int minuto, int quant){
  for(int i = 0; i < quant; i++){
    if(a[i].hora == hora and a[i].minuto == minuto){
      return i;
    }
  }
  return -1;
}