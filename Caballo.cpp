#include "Caballo.h"
#include "Pieza.h"
Caballo::Caballo(){

}
Caballo::Caballo(string nombre,char posx,int posy):Pieza(posx , posy, nombre){
    
}
string Caballo::toString(){
    string posiy=""; 
    posiy+=posy;
    return nombre+"["+posx+","+posiy+"]";
}
void Caballo::setX(char le){
    posx=le;
}
char Caballo::getX(){
    return posx;
}
void Caballo::setY(int nu){
    posy=nu;
}
int Caballo::getY(){
    return posy;
}
bool Caballo::mueve(int x,int y,int x1, int y1){
  return true;      
} 