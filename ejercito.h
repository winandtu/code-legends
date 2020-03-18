#ifndef EJERCITO_H
#define EJERCITO_H

#include "avatar.h"
#include <vector>
using namespace std;

class Ejercito{
  public:
  Ejercito(int N_Luchadores, int N_Tiradores, int N_Magos);
  void calcularEjercito();
  int cantidadLuchadores, cantidadTiradores, cantidadMagos;

  vector<Avatar> Luchadores;
  vector<Avatar> Tiradores;
  vector<Avatar> Magos;
};

#endif