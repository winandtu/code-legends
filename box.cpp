#include "box.h"

Box::Box(){
  Torreta = false;
}

void Box::setID(int id){
  ID = id;
}

int Box::getID(){
  return ID;
}

void Box::setTorreta(){
  Torreta = true;
}

void Box::setEjercito(int N_Luchadores, int N_Tiradores, int N_Magos){
  Ejercito Ejercito(N_Luchadores, N_Tiradores, N_Magos);
}

void Box::getEjercito(){
  
}