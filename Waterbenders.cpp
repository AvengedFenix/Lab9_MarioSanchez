#include "Waterbenders.h"


Waterbenders::Waterbenders(){

}

Waterbenders::Waterbenders(string nombre,int hp, int defensa, int ofensa, int fuerza, int nSuerte){
    this->nombre=nombre;
    this->hp=hp;
    this->defensa=defensa;
    this->ofensa=ofensa;
    this->fuerza=fuerza;
    this->nSuerte=nSuerte;
}

void Waterbenders::ataqueRegular(Bender* b){
    if (b) {
        /* code */
    }
}

void Waterbenders::ataqueEspecial(Bender* b) {

}

Waterbenders::~Waterbenders(){

}
