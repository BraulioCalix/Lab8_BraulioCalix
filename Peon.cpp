#include "Peon.h"
#include "Pieza.h"
Peon::Peon(){

}
Peon::Peon(string nombre,char posx,int posy):Pieza(posx , posy,nombre){
    
}
string Peon::toString(){
    string posiy=""; 
    posiy+=posy;
    return nombre+"["+posx+","+posiy+"]";
}

void Peon::setX(char le){
    posx=le;
}
char Peon::getX(){
    return posx;
}
void Peon::setY(int nu){
    posy=nu;
}
int Peon::getY(){
    return posy;
}
bool Peon::mueve(int x,int y, int x1,int y1){
    bool mover=false;
        if((x+1==x1)&&(y==y1)){
            mover=true;
        }else if((x-1==x1)&&(y==y1)){
            mover=true;
        }else{
            mover = false;
        }
      return  mover;
}