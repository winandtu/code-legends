#ifndef AVATAR_H
#define AVATAR_H

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include<stdlib.h>
using namespace std;

class Avatar{

  /*public: 

  Avatar();
  void setTipo(string tipo);
  string Tipo;
  float Poder;
  float Mana;
  float Vida;

  */protected:
    string tipoAvatar;
    float poder;
    float mana;
    float vida; 

  public:
    
    Avatar(string tipo);
    //~ Avatar();
    void setVida(float nuevaVida); //Para modificar la vida
    string getTipoAvatar();
    float getPoder();
    float getVida();
    float getMana(); 

};

#endif