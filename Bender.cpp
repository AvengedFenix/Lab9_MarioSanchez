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

void Bender::ataqueRegular(Bender*){

}

void Bender::ataqueEspecial(Bender*) {

}

Bender::~Bender(){

}
