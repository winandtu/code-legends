#include "ejercito.h"

Ejercito::Ejercito(int N_Luchadores, int N_Tiradores, int N_Magos){
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

}