#ifndef AVATAR_H
#define AVATAR_H

#include <string>
using namespace std;

class Avatar{
  public:
  Avatar ();
  string Tipo;
  void setTipo(string tipo);
  float Poder;
  float Mana;
  float Vida;
};

#endif