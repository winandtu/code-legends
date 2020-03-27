#include "ejercito.h"


/*Ejercito::Ejercito(int N_Luchadores, int N_Tiradores, int N_Magos){
  Avatar Luchador[N_Luchadores], Tirador[N_Tiradores], Mago[N_Magos];
  for(int a =0; a!=N_Luchadores ; a++){
    Luchador[a].setTipo("luchador");
    Luchadores.push_back(Luchador[a]);
  }

  for(int b =0; b!=N_Tiradores ; b++){
    Tirador[b].setTipo("tirador");
    Tiradores.push_back(Tirador[b]);
  }

  for(int c =0; c!=N_Magos ; c++){
    Mago[c].setTipo("mago");
    Magos.push_back(Mago[c]);
  }
  cantidadLuchadores=N_Luchadores;
  cantidadTiradores=N_Tiradores;
  cantidadMagos=N_Magos;

}

void Ejercito::calcularEjercito(){
  cantidadLuchadores=0;
  cantidadTiradores=0;
  cantidadMagos=0;
  vector<Avatar>::iterator L,T,M;

  for(L = Luchadores.begin(); L!=Luchadores.end() ; L++){
    cantidadLuchadores ++;
  }
  for(T = Tiradores.begin(); T!=Tiradores.end() ; T++){
    cantidadTiradores ++;
  }
  for(M = Magos.begin(); T!=Magos.end() ; M++){
    cantidadMagos ++;
  }

} */

Ejercito::Ejercito(){
  cantidadLuchadores = 10;
  cantidadTiradores = 5;
  cantidadMagos = 2;
/*
    cantidadLuchadores =numeroLuchadores; 
    cantidadTiradores=numeroTiradores;
    cantidadMagos=numeroMagos;


  //Cual = Cual avatar.
    for(int cual = 0; cual < numeroLuchadores ; cual++){
      ejercito.push_back(new Avatar("luchador"));
    }
    for(int cual = 0; cual < numeroTiradores ; cual++){
      ejercito.push_back(new Avatar("tirador"));
    }
    for(int cual = 0; cual < numeroMagos ; cual++){
      ejercito.push_back(new Avatar("mago"));
    }
    */
} 

int Ejercito::getCantidadLuchadores(){
  return cantidadLuchadores;
}

void Ejercito::setCantidadLuchadores(int numero){
  cantidadLuchadores = numero;
}

int Ejercito::getCantidadTiradores(){
  return cantidadTiradores;
}

void Ejercito::setCantidadTiradores(int numero){
  cantidadLuchadores = numero;
}

int Ejercito::getCantidadMagos(){
  return cantidadMagos;
}

void Ejercito::setCantidadMagos(int numero){
  cantidadLuchadores = numero;
}


void Ejercito::setCantidadEjercito(int luchadores, int tiradores, int magos){
  cantidadLuchadores = luchadores;
  cantidadLuchadores = tiradores;
  cantidadMagos = magos;

}


vector<Avatar*> Ejercito::getEjercito(){ //cree un nuevo tipo el cual es: vector<*avatar>
  return ejercito;
}
