#ifndef CABALLO_H
#define CABALLO_H
#include <string>
using std::string;
#include "Pieza.h"
class Caballo:public Pieza{
private :

string nombre;
public :
    Caballo();
    Caballo(string ,char,int);
    string toString();
    void setX(char);
    char getX();
    void setY(int);
    int getY();
    virtual bool mueve(int,int,int,int);
};
#endif
