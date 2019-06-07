#include "Pieza.h"
#include <string>
using std::string;

Pieza::Pieza(){

}
Pieza::Pieza(char pos_x, int pos_y,string nomb){
    posx=pos_x;
    pos_y=pos_y;
    nombre=nomb;
}
string Pieza::toString(){

    return "";
}
bool Pieza::mueve(int ,int,int,int){
    return true;
}
