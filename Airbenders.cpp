#include "Airbenders.h"


Airbenders::Airbenders(){

}

Airbenders::Airbenders(string nombre,int hp, int defensa, int ofensa, int fuerza, int nSuerte){
    this->nombre=nombre;
    this->hp=hp;
    this->defensa=defensa;
    this->ofensa=ofensa;
    this->fuerza=fuerza;
    this->nSuerte=nSuerte;
}

void Airbenders::ataqueRegular(Bender* b){
    if (typeid(*b).name()==typeid(Earthbenders).name()) {

    }
}

void Airbenders::ataqueEspecial(Bender* b) {

}

Airbenders::~Airbenders(){

}
