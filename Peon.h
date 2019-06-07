#ifndef PEON_H
#define PEON_H
#include <string>
using std::string;
#include "Pieza.h"
class Peon:public Pieza{

public :
    Peon();
    Peon(string ,char,int);
    string toString();
    void setX(char);
    char getX();
    void setY(int);
    int getY();
    virtual bool mueve(int,int,int,int);
};
#endif
