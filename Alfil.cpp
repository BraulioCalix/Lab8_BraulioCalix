#include "Alfil.h"
#include "Pieza.h"
Alfil::Alfil(){

}
Alfil::Alfil(string nombre,char posx,int posy):Pieza(posx , posy,nombre){
    
}
string Alfil::toString(){
    string posiy=""; 
    posiy+=posy;
    return nombre+"["+posx+","+posiy+"]";
}
void Alfil::setX(char le){
    posx=le;
}
char Alfil::getX(){
    return posx;
}
void Alfil::setY(int nu){
    posy=nu;
}
int Alfil::getY(){
    return posy;
}