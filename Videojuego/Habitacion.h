/*
Evidencia::Situación Problema TC1030
Héctor Robles Villarreal A01634105
Martín Alejandro Hermosillo García A01634552
Fabiola Uribe Plata
Tecnológico de Monterrey Campus Guadalajara
Viernes 11 de Junio 2021
*/
#ifndef HABITACION_H
#define HABITACION_H
#include<iostream>
#include<string>

class Habitacion{
    public:
    Habitacion();
    Habitacion(std::string, std::string, int);
    std::string getNombreH()const;
    std::string getDescripcionH() const;
    int getCantItems()const;
    void setNombreH(std::string);
    void setDescripcionH(std::string);
    void setCantItems(int);
    void mostrarHabitacion();

    private:
    std::string nombre;
    std::string descripcion;
    int cant_items;
};

Habitacion::Habitacion(){
    nombre = "";
    descripcion = "";
    cant_items = 0;
}

Habitacion::Habitacion(std::string _nombre, std::string _descripcion, int _cantItems){
    nombre = _nombre;
    descripcion = _descripcion;
    cant_items = _cantItems;
}

std::string Habitacion::getNombreH()const{
    return nombre;
}

std::string Habitacion::getDescripcionH()const{
    return descripcion;
}

int Habitacion::getCantItems()const{
    return cant_items;
}

void Habitacion::setNombreH(std::string _nombre){
    nombre = _nombre;
}

void Habitacion::setDescripcionH(std::string _descripcion){
    descripcion = _descripcion;

}

void Habitacion::mostrarHabitacion(){
    std::cout << "Nombre de la habitación: " << nombre << std::endl;
    std::cout <<" Descripción: " << descripcion << std::endl << std::endl;
}

#endif //HABITACION_H
