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
  void setTorreta();

  void setEjercito(int N_Luchadores, int N_Tiradores, int N_Magos);
  void getEjercito();

  protected:
};

#endif