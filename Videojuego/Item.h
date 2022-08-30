/*
Evidencia::Situación Problema TC1030
Héctor Robles Villarreal A01634105
Martín Alejandro Hermosillo García A01634552
Fabiola Uribe Plata
Tecnológico de Monterrey Campus Guadalajara
Viernes 11 de Junio 2021
*/
#ifndef ITEM_H
#define ITEM_H
#include<iostream>
#include<string>

class Item{
    public:
    Item();
    Item(std::string,std::string);
    void setNombreI(std::string);
    void setDescripcionI(std::string);
    std::string getNombreI() const;
    std::string getDescripcionI() const;
    friend ostream& operator <<(ostream&, Item&);
    void mostrarItem();

    private:
    std::string nombre,descripcion;
};

Item::Item(){
    nombre = "";
    descripcion = "";
}

Item::Item(std::string _nombre, std::string _descripcion){
    nombre = _nombre;
    descripcion = _descripcion;
}

std::string Item::getNombreI()const{
    return nombre;
}

std::string Item::getDescripcionI()const{
    return descripcion;
}

void Item::setNombreI(std::string _nombre){
    nombre = _nombre;
}

void Item::setDescripcionI(std::string _descripcion){
    descripcion = _descripcion;
}

ostream& operator<<(ostream& salida, Item& Objeto){
  salida << "Item: " << Objeto.nombre << endl;
  salida << "Descripción: " << Objeto.descripcion << endl << endl;
  return salida;
}

void Item::mostrarItem(){
    std::cout <<"Descripcion: " << descripcion << std::endl << std::endl;
}

#endif //ITEM_H
