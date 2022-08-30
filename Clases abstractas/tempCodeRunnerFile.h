#ifndef PERRO_H
#define PERRO_H

#include "Animal.h"

class Perro:public Animal{
    public:
    Perro(string,int);
    void muestra() override;
    void habla() override;
};

Perro::Perro(string _nombre, int _a):Animal(_nombre,_a){
}

void Perro::muestra(){
    cout << "Soy el perro " << getNombre() << "tengo " << calculaEdad() << endl;
}

void Perro::habla(){
    cout << "GUAU";
}





#endif //PERRO_H