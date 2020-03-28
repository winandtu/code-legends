#include "box.h"

Box::Box(){
  Torreta = false;
  tieneEjercito = false;
}

void Box::setID(int id){
  ID = id;
}

int Box::getID(){
  return ID;
}
//Estado de la torreta
void Box::setTorreta(){
  Torreta = true;
}

void Box::setEjercito(int NLuchadores, int NTiradores, int NMagos){
  
  ejercito -> setCantidadLuchadores(NLuchadores);
  ejercito -> setCantidadTiradores(NTiradores);
  ejercito -> setCantidadMagos(NMagos);
  ejercito -> llenarFilas();
  
}

void Box::informacionEjercito(){
  cout << "Estado Ejercito " << ID << endl;
  cout<< "Cantidad Luchadores: " << ejercito -> getCantidadLuchadores() << endl;
  cout<< "Cantidad Tiradores: " << ejercito -> getCantidadTiradores() << endl;
  cout<< "Cantidad Magos: " << ejercito -> getCantidadMagos() << endl;
}
  
void Box::setTieneEjercito(){
  tieneEjercito = true;
  ejercito = new Ejercito;
}

/*void Box::setAtacante(double vida){
  
}
*/