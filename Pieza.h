#ifndef PIEZA_H
#define PIEZA_H
#include <string>
using std::string;
class Pieza
{
protected:
    char posx;
    int posy;
    string nombre;

public: 
    Pieza();
    Pieza(char ,int ,string);
    virtual string toString();
    virtual bool mueve(int ,int,int,int);
};
#endif