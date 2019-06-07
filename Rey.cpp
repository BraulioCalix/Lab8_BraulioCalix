#include "Rey.h"
#include "Pieza.h"
Rey::Rey(){

}
Rey::Rey(string nombre,char posx,int posy):Pieza(posx , posy,nombre){
    
}
string Rey::toString(){
    string posiy=""; 
    posiy+=posy;
    return nombre+"["+posx+","+posiy+"]";
}

void Rey::setX(char le){
    posx=le;
}
char Rey::getX(){
    return posx;
}
void Rey::setY(int nu){
    posy=nu;
}
int Rey::getY(){
    return posy;
}
bool Rey::mueve(int x,int y ,int x1,int y1){
    bool mueve=false;
    if(((x+1==x1)&&y==y1)||((x-1==x1)&&y==y1)||((y+1==y1)&& x==x1)||((y-1==y1)&&x==x1)){
        mueve=true;
    }else if(((x-1==x1)&&(y-1==y1))||((x+1==x1)&&y+1==y1)||((x+1==x1)&&y-1==y1)||((x-1==x1)&&y+1==y1)){
        mueve=true;
    }else{
        mueve=false;
    }
    return mueve;
}