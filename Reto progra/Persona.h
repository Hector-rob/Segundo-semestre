#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona{
    public:
        Persona();
        Persona(std::string,std::string);
        std::string getNombre()const;
        std::string getNacionalidad()const;
        void setNombre(std::string);
        void setNacionalidad(std::string);
        virtual void imprime() = 0;

    private:
        std::string nombre, nacionalidad;

};

Persona::Persona(){
    nombre = " ";
    nacionalidad = " ";
}

Persona::Persona(std::string _no, std::string _na){
    nombre = _no;
    nacionalidad = _na;
}

std::string Persona::getNombre()const{
    return nombre;
}

std::string Persona::getNacionalidad()const{
    return nacionalidad;
}

void Persona::setNombre(std::string _n){
    nombre = _n;
}

void Persona::setNacionalidad(std::string _na){
    nacionalidad = _na;
}




#endif //PERSONA_H




