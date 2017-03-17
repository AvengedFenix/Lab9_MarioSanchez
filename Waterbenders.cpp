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

}

void Waterbenders::ataqueEspecial(Bender* b) {
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
    if (typeid(*b).name()==typeid(Earthbenders).name()) {
        temp += ofensa*0.25;
    }
    b->setHP(b->getHP()-temp);
    if (this->ofensa >=110) {
        this->hp += 75;
    }
}

Waterbenders::~Waterbenders(){

}
