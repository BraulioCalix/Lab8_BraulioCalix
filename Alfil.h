#ifndef ALFIL_H
#define ALFIL_H
#include <string>
using std::string;
#include "Pieza.h"
class Alfil:public Pieza{
private :
public :
    Alfil();
    Alfil(string ,char,int);
    string toString();
    void setX(char);
    char getX();
    void setY(int);
    int getY();
};
#endif