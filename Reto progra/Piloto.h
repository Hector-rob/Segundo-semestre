#ifndef PILOTO_H
#define PILOTO_H

#include "Persona.h"
#include <iostream>

class Piloto:public Persona{
    public:
    Piloto();
    Piloto(std::string, std::string, int);
    int getNumLicencia()const;
    void setNumLicencia(int);
    void imprime()override;
    private:
    int numLicencia;
};

Piloto::Piloto(){
    numLicencia = 0;
}

Piloto::Piloto(std::string _no, std::string _na, int _num):Persona(_no,_na){
    numLicencia = _num;
}

int Piloto::getNumLicencia()const{
    return numLicencia;
}

void Piloto::setNumLicencia(int _n){
    numLicencia = _n;
}

void Piloto::imprime(){
    std::cout << "Nombre: " << getNombre() << std::endl;
    std::cout <<"Nacionalidad: " <<getNacionalidad() << std::endl;
    std::cout <<"Numero de Licencia: " << numLicencia << std::endl;
}








#endif //PILOTO_H
