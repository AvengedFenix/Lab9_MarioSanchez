#include "Earthbenders.h"
#include <iostream>

Earthbenders::Earthbenders(){

}

Earthbenders::Earthbenders(string nombre,int hp, int defensa, int ofensa, int fuerza, int nSuerte) : Bender(nombre,hp,defensa,ofensa,fuerza,nSuerte){
    this->nombre=nombre;
    this->hp=hp;
    this->defensa=defensa;
    this->ofensa=ofensa;
    this->fuerza=fuerza;
    this->nSuerte=nSuerte;
}

void Earthbenders::ataqueRegular(Bender* b){
    b->setHP(b->getHP()-ofensa);
    std::cout << "Stats: " << "\nHP" << b->getHP() << "Defensa " << b->getDefensa() << "Ofensa " << b->getOfensa()<<"Suerte " << b->getNSuerte();

}

void Earthbenders::ataqueEspecial(Bender* b) {
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
    if (typeid(*b).name()==typeid(Airbenders).name()) {
        temp += ofensa*0.25;
    }
    b->setHP(b->getHP()-temp);

}

void espiar(Bender* b){
    std::cout << "Stats: " << "\nHP" << b->getHP() << "Defensa " << b->getDefensa() << "Ofensa " << b->getOfensa()<<"Suerte " << b->getNSuerte();
}

Earthbenders::~Earthbenders(){

}
