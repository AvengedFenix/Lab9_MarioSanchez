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

void Bender::setNombre(string nombre){
    this->nombre=nombre;
}

string Bender::getNombre(){
    return nombre;
}

void Bender::setHP(int HP){
    this->hp=HP;
}

int Bender::getHP(){
    return hp;
}

void Bender::setDefensa(int defensa){
    this->defensa=defensa;
}

int Bender::getDefensa(){
    return defensa;
}

void Bender::setOfensa(int ofensa){
    this->ofensa=ofensa;
}

int Bender::getOfensa(){
    return ofensa;
}

void Bender::setNSuerte(int nSuerte){
    this->nSuerte=nSuerte;
}

int Bender::getNSuerte(){
    return nSuerte;
}



Bender::~Bender(){

}
