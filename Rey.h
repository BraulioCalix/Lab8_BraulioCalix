#ifndef REY_H
#define REY_H
#include <string>
using std::string;
#include "Pieza.h"
class Rey:public Pieza{
private :
public :
    Rey();
    Rey(string ,char,int);
    string toString();
    void setX(char);
    char getX();
    void setY(int);
    int getY();
    virtual bool mueve(int,int,int,int);
};
#endif