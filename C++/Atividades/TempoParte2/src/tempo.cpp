#include <iostream>
#include "../include/tempo.hpp"
using namespace std;

int compara_tempo(tempo t1, tempo atual){
  if(t1.horas > atual.horas){
    return 1;
  } else {
    if(t1.minutos > atual.minutos){
      return 1;
    } else {
      if(t1.segundos > atual.segundos){
        return 1;
      } else {
        return 0;
      }
    }
  }
}