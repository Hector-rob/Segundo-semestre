/*
Evidencia::Situación Problema TC1030
Héctor Robles Villarreal A01634105
Martín Alejandro Hermosillo García A01634552
Fabiola Uribe Plata
Tecnológico de Monterrey Campus Guadalajara
Viernes 11 de Junio 2021
*/
#ifndef PERSONAJEPRINCIPAL_H
#define PERSONAJEPRINCIPAL_H
#include "Personaje.h"
#include <vector>

class PersonajeP:public Personaje{
    public:
    PersonajeP(std::string,int,Habitacion,std::string);
    void setHabitacion(Habitacion);
    void setItem(Item);
    void mostrarInfo()override;
    void imprimeP();

    private:
    vector <Item> inventario;
    Habitacion habActual;
};

PersonajeP::PersonajeP(std::string _n, int _e, Habitacion _h,std::string _d):Personaje(_n,_e,_d){
    habActual = _h;
}

void PersonajeP::setHabitacion(Habitacion habitacion){
    habActual = habitacion;

}

void PersonajeP::setItem(Item item){
    inventario.push_back(item);
}
void PersonajeP::mostrarInfo(){
     std::cout << "Te encuentras en: " << habActual.getNombreH() << std::endl<< std::endl;
     std::cout << "Evidencia recolectada: " << std::endl;
     for(int i = 0; i < inventario.size(); i ++){
        std::cout << "-" << inventario[i].getNombreI() << std::endl;
    }
}

void PersonajeP::imprimeP(){
    std::cout << "Nombre: " << getNombre() << std::endl;
    std::cout << "Edad: " << getEdad() << std::endl;
    std::cout << "Descripción: " << getDescripcion()<<std::endl;
}

#endif //PERSONAJE_PRINCIPAL
