#include "avatar.h"

Avatar::Avatar(){

}

void Avatar::setTipo(string tipo){
  Tipo=tipo;
  if(tipo=="luchador"){
    Poder = .7;
    Mana = .6;
    Vida = 4;
  }else if(tipo=="tirador"){
    Poder = 1;
    Mana = .3;
    Vida = 3;
  }else if(tipo=="mago"){
    Poder = .2;
    Mana = 1;
    Vida = 5;
  }
}