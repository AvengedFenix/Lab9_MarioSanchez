#pragma once
#include <typeinfo>
#include <stdlib.h>
#include <ctime>

class Bender {
private:
    string nombre;
    int hp;
    int defensa;
    int ofensa;
    int fuerza;
    int nSuerte;

public:
    Bender ();
    Bender(string,int,int,int,int,int);

    void setNombre(string);
    string getNombre();
    void setHP(int);
    int getHP();
    void setDefensa(int);
    int getDefensa();
    void setOfensa(int);
    int getOfensa();
    void setNSuerte(int);
    int getNSuerte();

    virtual void ataqueRegular(Bender*) = 0;
    virtual void ataqueEspecial(Bender*) = 0;
    ~Bender ();
};
