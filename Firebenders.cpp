#include "Firebenders.h"

Firebenders::Firebenders(){

}

Firebenders::Firebenders(string nombre,int hp, int defensa, int ofensa, int fuerza, int nSuerte) : Bender(string,int,int,int,int,int){
    this->nombre=nombre;
    this->hp=hp;
    this->defensa=defensa;
    this->ofensa=ofensa;
    this->fuerza=fuerza;
    this->nSuerte=nSuerte;
}

void Firebenders::ataqueRegular(Bender* b){

}

void Firebenders::ataqueEspecial(Bender* b) {
    int r;
    int temp = ofensa;
    if (nSuerte <=5) {
        srand(time(0));
        r = rand() % 1000;
        if (r == 50) {
            temp += ofensa*0.50;
        }
    }else if (nSuerte >=6 && nSuerte <=9) {
        srand(time(0));
        r = rand() % 100;
        if (r % 5 == 0) {
            temp += ofensa*0.50;
        }
    }else if (nSuerte == 10) {
        srand(time(0));
        r = rand() % 10;
        if (r % 3 == 0) {
            temp += ofensa*0.50;
        }
    }
    if (typeid(*b).name()==typeid(Waterbenders).name()) {
        temp += ofensa*0.25;
    }
    b->setHP(b->getHP()-temp);
}

Firebenders::~Firebenders(){

}
