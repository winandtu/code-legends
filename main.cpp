#include "avatar.h"
#include "ejercito.h"
#include "box.h"
#include "tablero.h"
#include "menu.h"
#include <iostream>
using namespace std;

int main() {
  int luchadores, tiradores, magos;
  cout << "Cuantos luchadores? ";
  cin >> luchadores;

  cout << "Cuantos tiradores? ";
  cin >> tiradores;

  cout << "Cuantos magos? ";
  cin >> magos;

  Ejercito Player1(luchadores, tiradores, magos);
  cout << "Cantidad de Luchadores: " << Player1.cantidadLuchadores << endl << "Cantidad de Tiradores: " << Player1.cantidadTiradores << endl << "Cantidad de Magos: " << Player1.cantidadMagos;
}