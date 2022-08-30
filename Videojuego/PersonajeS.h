/*
Evidencia::Situación Problema TC1030
Héctor Robles Villarreal A01634105
Martín Alejandro Hermosillo García A01634552
Fabiola Uribe Plata
Tecnológico de Monterrey Campus Guadalajara
Viernes 11 de Junio 2021
*/
#ifndef PERSONAJESECUNDARIO_H
#define PERSONAJESECUNDARIO_H
#include "Personaje.h"

class PersonajeS:public Personaje{
    public:
    PersonajeS(std::string,int,std::string);
    void mostrarInfo()override;
};

PersonajeS::PersonajeS(std::string _n, int _e,std::string _d):Personaje(_n,_e,_d){
}

void PersonajeS::mostrarInfo(){
    std::cout << "Nombre: " << getNombre() << std::endl;
    std::cout << "Edad: " << getEdad() << std::endl;
    std::cout << "Descripción: " << getDescripcion()<<std::endl;
}

#endif //PERSONAJE_PRINCIPAL
