#include "avatar.h"
#include "ejercito.h"
#include "box.h"
#include "tablero.h"
#include "coordenadas.h"
#include "menu.h"

int main() {
  //Imprimir titulo Code Legends
  string imprimirTitulo;
  ifstream Titulo;
  Titulo.open("Titulo.txt");
  while(getline(Titulo, imprimirTitulo)){
    cout << imprimirTitulo << endl;
  }
  Titulo.close();
  
  Menu Menu;
  Menu.Interfaz();

//Probando commit

/*
  //Utilizo -> por que son punteros a la clase avatar, no son objetos.
  //Aqui configuro todo lo del avatar:

  cout<<"Configuracion AVATAR: "<<endl;//Ejemplo del avatar

  Avatar *avatar = new Avatar("mago");// Es un objeto dinamico: Aqui puedo colocar el tipo de avatar que quiero
  cout <<"Vida del mago es: "<< avatar -> getVida() << endl;//Vida normal del mago
  cout <<"Poder del mago es: "<< avatar->getPoder() << endl;//Poder del mago

  avatar->setVida(0.5); //NUeva vida, haciendo la resta de lo que nos piden
  cout <<"Nueva vida del mago es: "<< avatar->getVida() << endl;//Aqui nos da la nueva vida

  cout<<endl;
  cout<<"Configuracion del EJERCITO: "<<endl; //Ejemplo del ejercito

  Ejercito *ejercito = new Ejercito(15,20,30); //Sirve como input, con el objeto dinamico

  cout<<"Cantidad de Luchadores: " <<ejercito->getCantidadLuchadores() << endl;
  cout<<"Cantidad de Tiradores: " <<ejercito->getCantidadTiradores() << endl;
  cout<<"Cantidad de Magos: " <<ejercito->getCantidadMagos() << endl;

  cout<< "Total cantidad de avatares forma 1: "<<ejercito->getCantidadEjercito() << endl; //Dos formas para dar el total de cantidad del ejercito
  
  cout<<"Forma 2: " <<ejercito->getEjercito().size() << endl; //Pero mejor es este ya que cuando mueren personas se va mermando el tamaño array de ejercito
  
  vector<Avatar*> totalEjercito = ejercito->getEjercito();
  float totalPoder = 0;
  for(int i = 0; i < totalEjercito.size(); i++){
    //cout << totalEjercito[i]->getTipoAvatar() << endl; //Por cada elemento del vector es un avatar entonces uno puede ingresar a las pps que tiene el avatar
    totalPoder = totalPoder + totalEjercito[i]->getPoder();
    //if(totalEjercito[index]->getTipoAvatar() == "luchador"){
    //  cout << totalEjercito[index]->getPoder() << endl;
    //}
  }
  cout <<"El total del poder del Ejercito es: "<< totalPoder << endl;
*/

return 0;
}