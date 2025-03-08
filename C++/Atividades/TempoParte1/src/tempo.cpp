#include <iostream>
#include "../include/tempo.hpp"
using namespace std;

int compara_tempo(tempo t1, tempo t2){
  if(t1.horas > t2.horas){
    return 1;
  } else if(t1.horas < t2.horas){
    return -1;
  } else {
    if(t1.minutos > t2.minutos){
      return 1;
    } else if(t1.minutos < t2.minutos){
      return -1;
    } else {
      if(t1.segundos > t2.segundos){
        return 1;
      } else if(t1.segundos < t2.segundos){
        return -1;
      } else {
        return 0;
      }
    }
  }
}