#ifndef BOX_H
#define BOX_H

#include "avatar.h"
#include "ejercito.h"
using namespace std;

class Box{
  public:
  Box();
  int ID;
  void setID(int id);
  int getID();

  bool Torreta;
  bool tieneEjercito;
  void setTieneEjercito();
  void setTorreta();

  void setEjercito(int NLuchadores, int NTiradores, int NMagos);
  void informacionEjercito();
  Ejercito *ejercito;

};

#endif