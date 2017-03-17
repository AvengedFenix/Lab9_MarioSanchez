#include "Bender.h"
#include "Airbenders.h"
#include "Earthbenders.h"
#include "Firebenders.h"
#include "Waterbenders.h"
#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char const *argv[]) {
    std::vector<Bender*> benders;
    std::cout << "1. Crear \n2. Simulacion" << endl;
    int op;
    std::cin >> op;
    switch (op) {
        case 1:{
            std::cout << "1. Airbenders \n2. Firebenders \n 3. Earthbenders \n 4. Waterbenders" << endl;
            int bend;
            std::cin >> bend;
            string nombre;
            std::cin >> nombre;
            std::cout << "Ingrese el nombre" << endl;
            int hp;
            std::cin >> hp;
            if (hp<=0) {
                std::cout << "No puede ingresar numeros menores a 0 o 0, porfavor vuelva a ingresar" << endl;
                std::cin >> hp;
            }
            std::cout << "Ingrese el HP" << endl;
            int defensa;
            std::cin >> defensa;
            std::cout << "Ingrese la defensa" << endl;
            int ofensa;

            std::cout << "Ingrese la ofensa" << endl;
            std::cin >> ofensa;
            int fuerza = 0;

            int nSuerte;
            std::cout << "Ingrese el numero de suerte" << endl;
            std::cin >> nSuerte;
            switch (bend) {
                case 1:{
                    benders->push_back(new Airbenders(nombre,hp,defensa,ofensa,fuerza,nSuerte));
                    break;
                }// fin case 1.1
                case 2:{
                    benders->push_back(new Firebenders(nombre,hp,defensa,ofensa,fuerza,nSuerte));
                    break;
                }//fin case 1.2
                case 3:{
                    benders->push_back(new Earthbenders(nombre,hp,defensa,ofensa,fuerza,nSuerte));
                    break;
                }//fin case 1.3
                case 4:{
                    benders->push_back(new Waterbenders(nombre,hp,defensa,ofensa,fuerza,nSuerte));
                    break;
                }//fin case 1.4
            }//fin switch 1.1
            break;
        }//fin case 1
        case 2:{

        }
    }//fin switch
    return 0;
}//fin main
