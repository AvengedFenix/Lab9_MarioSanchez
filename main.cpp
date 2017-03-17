#include "Bender.h"
#include "Airbenders.h"
#include "Earthbenders.h"
#include "Firebenders.h"
#include "Waterbenders.h"
#include <iostream>
#include <vector>

using namespace std;

void Simulacion(vector<Bender*>);

int main(int argc, char const *argv[]) {
    std::vector<Bender*> benders;
    char resp = 's';
    while (resp == 's' || resp == 'S') {
        std::cout << "1. Crear \n2. Simulacion" << endl;
        int op;
        std::cin >> op;
        switch (op) {
            case 1:{
                std::cout << "1. Airbenders \n2. Firebenders \n3. Earthbenders \n4. Waterbenders" << endl;
                int bend;
                std::cin >> bend;
                string nombre;

                std::cout << "Ingrese el nombre" << endl;
                std::cin >> nombre;
                int hp;
                std::cout << "Ingrese el HP" << endl;
                std::cin >> hp;
                if (hp<=0) {
                    std::cout << "No puede ingresar numeros menores a 0 o 0, porfavor vuelva a ingresar" << endl;
                    std::cin >> hp;
                }

                int defensa;

                std::cout << "Ingrese la defensa" << endl;
                std::cin >> defensa;
                int ofensa;

                std::cout << "Ingrese la ofensa" << endl;
                std::cin >> ofensa;
                int fuerza = 0;

                int nSuerte;
                std::cout << "Ingrese el numero de suerte" << endl;
                std::cin >> nSuerte;
                switch (bend) {
                    case 1:{
                        benders.push_back(new Airbenders(nombre,hp,defensa,ofensa,fuerza,nSuerte));
                        break;
                    }// fin case 1.1
                    case 2:{
                        benders.push_back(new Firebenders(nombre,hp,defensa,ofensa,fuerza,nSuerte));
                        break;
                    }//fin case 1.2
                    case 3:{
                        benders.push_back(new Earthbenders(nombre,hp,defensa,ofensa,fuerza,nSuerte));
                        break;
                    }//fin case 1.3
                    case 4:{
                        benders.push_back(new Waterbenders(nombre,hp,defensa,ofensa,fuerza,nSuerte));
                        break;
                    }//fin case 1.4
                }//fin switch 1.1
                break;
            }//fin case 1
            case 2:{

            }
        }//fin switch
        std::cout << "Desea continuar S/N" << endl;
        std::cin >> resp;
    }//fin while

    return 0;
}//fin main

void Simulacion(vector<Bender*> v){
    std::cout << "Jugador 1, Elija su personaje" << endl;
    for (int i = 0; i < v.size(); i++) {
        std::cout << "1. " << v[i]->getNombre() << endl;
    }
    int jug1;
    std::cin >> jug1;
//    v.erase(vec.begin() +jug1);
    std::cout << "Jugador 2, Elija su personaje" << endl;
    int jug2;
    std::cin >> jug2;
    while (jug1 == jug2) {
        std::cout << "No puede elegir ese personaje, el jugador 1 ya lo tomo" << endl;
        std::cin >> jug2;
    }
}
