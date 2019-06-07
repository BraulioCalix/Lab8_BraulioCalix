#include "Torre.h"
#include "Pieza.h"
Torre::Torre(){

}
Torre::Torre(string nombre,char posx,int posy):Pieza(posx , posy,nombre){
    
}
string Torre::toString(){
    string posiy=""; 
    posiy+=posy;
    return nombre+"["+posx+","+posiy+"]";
}
void Torre::setX(char le){
    posx=le;
}
char Torre::getX(){
    return posx;
}
void Torre::setY(int nu){
    posy=nu;
}
int Torre::getY(){
    return posy;
}
bool Torre::mueve(int x,int y ,int x1 ,int y1){
    bool mueve=false;
    if(x==x1 || y== y1 ){
        mueve=true;
    }
    return mueve;
}