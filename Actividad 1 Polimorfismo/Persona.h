//
//  Persona.h
//  PolimPersonaMaestroEstudiante
//
//  Created by Yolanda Martinez on 17/05/20.
//  Copyright © 2020 com.itesm. All rights reserved.
//

#ifndef Persona_h
#define Persona_h
#include <iostream>
#include <string>

class Persona {
    public:
        Persona();
        Persona(std::string, int);
        std::string getNombre() const;
        void setNombre(std::string);
        int getEdad()const;
        void setEdad(int);
        // 1. Agrega lo necesario para que el método muestraDatos() actúe polimorficamente con un manejador de la clase base
        virtual void muestraDatos(); 

    protected:
        std::string nombre;
        int edad;
};

Persona::Persona() {
    nombre = "N/A";
    edad = 0;
}

Persona::Persona(std::string nom, int ed) {
    nombre = nom;
    edad = ed;
}

std::string Persona::getNombre()const{
    return nombre;
}

void Persona::setNombre(std::string nom){
    nombre = nom;
}

int Persona::getEdad() const {
    return edad;
}

void Persona::setEdad(int ed) {
    edad = ed;
}

void Persona::muestraDatos() {
    std::cout << "Nombre: " << nombre << " Edad: " << edad << std::endl;
}

#endif /* Persona_h */
