#ifndef EJERCITO_H
#define EJERCITO_H

#include "avatar.h"
#include <vector>
using namespace std;

class Ejercito{

  /*public:
  Ejercito(int N_Luchadores, int N_Tiradores, int N_Magos);
  void calcularEjercito();
  int cantidadLuchadores, cantidadTiradores, cantidadMagos;

  vector<Avatar> Luchadores;
  vector<Avatar> Tiradores;
  vector<Avatar> Magos; */

  public: 
    int cantidadLuchadores, cantidadTiradores, cantidadMagos, cantidadEjercito;
    vector<Avatar*> ejercito; //avatar* es un vector de punteros a la clase avatar

    Ejercito();
    void calcularEjercito(); 
    void setCantidadLuchadores(int numero);
    int getCantidadLuchadores();
    void setCantidadTiradores(int numero);
    int getCantidadTiradores();
    void setCantidadMagos(int numero);
    int getCantidadMagos();
    void setCantidadEjercito(int luchadores, int tiradores, int magos);
    vector<Avatar*> getEjercito();// Obtener el ejercito
  
};

#endif