#include "Bender.h"


Bender::Bender(){

}

Bender::Bender(string nombre,int hp, int defensa, int ofensa, int fuerza, int nSuerte){
    this->nombre=nombre;
    this->hp=hp;
    this->defensa=defensa;
    this->ofensa=ofensa;
    this->fuerza=fuerza;
    this->nSuerte=nSuerte;
}

void setNombre(string nombre){
    this->nombre=nombre;
}

string getNombre(){
    return nombre;
}

void setHP(int HP){
    this->hp=HP
}
int getHP(){
    return hp;
}

void setDefensa(int defensa){
    this->defensa=defensa
}

int getDefensa(){
    return defensa;
}

void setOfensa(int ofensa){
    this->ofensa=ofensa;
}

int getOfensa(){
    return ofensa;
}

void setNSuerte(int nSuerte){
    this->nSuerte=nSuerte;
}

int getNSuerte(){
    return nSuerte;
}



Bender::~Bender(){

}
