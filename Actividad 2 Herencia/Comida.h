#ifndef COMIDA_H
#define COMIDA_H
#include <iostream>
#include <string>


/* La clase comida crea objetos que representan una de las opciones en un restaurante
   Tiene un nombre y un precio
   Comida es la clase base de las clases Hamburguesa y Pizza*/

class Comida{
    public:
        Comida();
        Comida(std::string, double);
        ~Comida();
        std::string getNombre() const;
        void setNombre(std::string);
        double getPrecio() const;
        void setPrecio(double);
        void muestra();

    private:
        std::string nombre;
        double precio;
};

// Constructores
Comida::Comida(){
    nombre = "";
    precio=0;
}

Comida::Comida(std::string nombre_, double precio_) {
    nombre = nombre_;
    precio=precio_;
}

//Destructor
Comida:: ~Comida() {}

//Accesores
std::string Comida::getNombre()const {
    return nombre;
}

double Comida::getPrecio()const {
    return precio;
}

//Modificadores
void Comida::setNombre(std::string nombre_){
    nombre = nombre_;
}

void Comida::setPrecio(double precio_){
    precio=precio_;
}

//Método muestra
void Comida::muestra(){
    std::cout<<nombre<<" $"<<precio<<std::endl;
}

#endif // COMIDA_H