/*
Evidencia::Situación Problema TC1030
Héctor Robles Villarreal A01634105
Martín Alejandro Hermosillo García A01634552
Fabiola Uribe Plata
Tecnológico de Monterrey Campus Guadalajara
Viernes 11 de Junio 2021
*/
#ifndef PERSONAJE_H
#define PERSONAJE_H
#include<iostream>
#include<string>
#include "Item.h"
#include "Habitacion.h"

class Personaje{
    public:
    Personaje();
    Personaje(std::string,int,std::string);
    void setNombre(std::string);
    void setEdad(int);
    void setDescripcion(std::string);
    std::string getNombre()const;
    int getEdad()const;
    std::string getDescripcion()const;
    void ir(std::string);
    virtual void mostrarInfo() = 0;
    private:
    std::string nombre,descripcion;
    int edad;
};

Personaje::Personaje(){
    nombre = "";
    descripcion = "";
    edad = 0;
}

Personaje::Personaje(std::string _nombre, int _edad,std::string _descripcion){
    nombre = _nombre;
    edad = _edad;
    descripcion = _descripcion;
}

void Personaje::setNombre(std::string _nombre){
    nombre = _nombre;
}

void Personaje::setEdad(int _edad){
    edad = _edad;
}

void Personaje::setDescripcion(std::string _descripcion){
    descripcion = _descripcion;
}

std::string Personaje::getNombre()const{
    return nombre;
}

int Personaje::getEdad()const{
    return edad;
}

std::string Personaje::getDescripcion()const{
    return descripcion;
}

void Personaje::ir(std::string _nomHab){
    Habitacion* ptrHabActual;
    ptrHabActual -> setNombreH(_nomHab);
}

#endif //PERSONAJE_H
