/*Examen argumentativo TC1030
Hector Robles Villarreal A01634105
*/

#ifndef TERRITORIO_H
#define TERRITORIO_H

#include <iostream>
#include <string>


class Territorio{
    public:
    Territorio();
    Territorio(std::string,double);
    std::string getNombre()const;
    double getSuperficie()const;
    void setNombre(std::string);
    void setSuperficie(double);
    virtual std::string obtenerDatos();
    friend std::ostream& operator<<(std::ostream&, Territorio*);

    private:
    std::string nombre;
    double superficie;

};

Territorio::Territorio(){
    nombre = " ";
    superficie = 0;
}

Territorio::Territorio(std::string _n, double _s){
    nombre = _n;
    superficie = _s;
}

std::string Territorio::getNombre()const{
    return nombre;
}

double Territorio::getSuperficie()const{
    return superficie;
}

void Territorio::setNombre(std::string _n){
    nombre = _n;
}

void Territorio::setSuperficie(double _s){
    superficie = _s;
}

std::string Territorio::obtenerDatos(){
    std::string datos;
    datos = getNombre() + " - " + std::to_string(getSuperficie()) + " m^2 ";
    return datos;

}

std::ostream& operator<< (std::ostream & salida, Territorio* territorio){
    salida  << territorio -> obtenerDatos();
    return salida;
}    







#endif //TERRITORIO_H