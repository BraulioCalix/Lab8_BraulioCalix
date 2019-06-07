#include "Reina.h"
#include "Pieza.h"
Reina::Reina(){

}
Reina::Reina(string nombre,char posx,int posy):Pieza(posx , posy,nombre){
    
}
string Reina::toString(){
    string posiy=""; 
    posiy+=posy;
    return nombre+"["+posx+","+posiy+"]";
}

void Reina::setX(char le){
    posx=le;
}
char Reina::getX(){
    return posx;
}
void Reina::setY(int nu){
    posy=nu;
}
int Reina::getY(){
    return posy;
}
bool Reina::mueve(){
    return true;
}