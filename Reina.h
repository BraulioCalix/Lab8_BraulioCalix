#ifndef REINA_H
#define REINA_H
#include <string>
using std::string;
#include "Pieza.h"
class Reina:public Pieza{
private :
public :
    Reina();
    Reina(string ,char,int);
    string toString();
    void setX(char);
    char getX();
    void setY(int);
    int getY();
    virtual bool mueve();
};
#endif