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

void Earthbenders::ataqueRegular(Bender* b){

}

void Earthbenders::ataqueEspecial(Bender* b) {
    if (typeid(*b).name()==typeid(Airbenders).name()) {
        double temp;
        if (nSuerte <=5) {
            
        }
    }
}

Earthbenders::~Earthbenders(){

}
