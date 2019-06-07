#ifndef TORRE_H
#define TORRE_H
#include <string>
using std::string;
#include "Pieza.h"
class Torre:public Pieza{
private :
public :
    Torre();
    Torre(string ,char,int);
    string toString();
    void setX(char);
    char getX();
    void setY(int);
    int getY();
    virtual bool mueve(int,int,int,int);
};
#endif