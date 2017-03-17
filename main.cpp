#include "Bender.h"
#include "Airbenders.h"
#include "Earthbenders.h"
#include "Firebenders.h"
#include "Waterbenders.h"
#include <iostream>
#include <vector>
#include <typeinfo>

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
                Simulacion(bend);
            }
        }//fin switch
        std::cout << "Desea continuar S/N" << endl;
        std::cin >> resp;
    }//fin while

    return 0;
}//fin main

void Simulacion(vector<Bender*> v){
    if (v.size()<2) {
        std::cout << "No hay personajes registrados, porfavor registre 2 al menos" << '\n';
    }else{
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
        bool seguir = true;
        int turno = 1;
        while (seguir == true) {
            int simu;
            std::cout << "Jugador "<<turno << "Elija su opcion \n1. Attack \n2. Special Attack \n3. Spy \n4. Heal \n5. Run"<< endl;
            std::cin >> simu;
            switch (simu) {
                case 1:{
                    if (turno == 1) {
                        v[J1]->ataqueRegular(v[J2]);
                    }else{
                        v[J2]->ataqueRegular(v[J1]);
                    }
                    break;
                }// fin case 1
                case 2:{
                    if (turno == 1) {
                        v[J1]->ataqueEspecial(v[J2]);
                    }else{
                        v[J2]->ataqueEspecial(v[J1]);
                    }
                    break;
                }//fin case 2
                case 3:{
                    if (turno == 1) {
                        if (typeid(*J1).name() == typeid(Earthbenders).name()) {
                            v[J1]->espiar(v[J2]);
                        }else{
                            std::cout << "Su personaje no es Earthbender" << endl;
                        }
                    }else{
                        if (typeid(*J2).name() == typeid(Earthbenders).name()) {
                            v[J2]->espiar(v[J1]);
                        }else{
                            std::cout << "Su personaje no es Earthbender" << endl;
                        }
                    }

                }//fin case 3
                case 4:{
                    if (turno == 1) {
                        if (typeid(*J1).name() == typeid(Waterbenders).name()){
                            v[J1]->heal();
                        }else{
                            std::cout << "Su personaje no es Waterbender" << endl;
                        }
                    }else{
                        if (typeid(*J2).name() == typeid(Waterbenders).name()){
                            v[J2]->heal();
                        }else{
                            std::cout << "Su personaje no es Waterbender" << endl;
                        }
                    }

                }//fin case 4
                case 5:{
                    std::cout << "El jugador: "<< turno << " ha escapado." << endl;
                    seguir = false;
                }
                if (v[J1]->getHP()<=0) {
                    std::cout << "El jugador 2 ha ganado" << endl;
                    seguir = false;
                }else if (v[J2]->getHP()<=0) {
                    std::cout << "El jugador 1 ha ganado" << endl;
                    seguir = false;
                }
                if (turno == 1) {
                    turno++;
                }else if (turno == 2) {
                    turno--;
                }
            }//fin switch
        }
    }

}
