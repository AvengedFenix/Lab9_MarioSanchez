#include "Earthbenders.h"

Earthbenders::Earthbenders(){

}

Earthbenders::Earthbenders(string nombre,int hp, int defensa, int ofensa, int fuerza, int nSuerte){
    this->nombre=nombre;
    this->hp=hp;
    this->defensa=defensa;
    this->ofensa=ofensa;
    this->fuerza=fuerza;
    this->nSuerte=nSuerte;
}

void Earthbenders::ataqueRegular(Bender*){

}

void Earthbenders::ataqueEspecial(Bender*) {

}

Earthbenders::~Earthbenders(){

}
