#pragma once

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
    virtual void ataqueRegular(Bender*);
    virtual void ataqueEspecial(Bender*);
    ~Bender ();
};
