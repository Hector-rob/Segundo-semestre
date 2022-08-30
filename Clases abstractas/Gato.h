#ifndef GATO_H
#define GATO_H

#include "Animal.h"

class Gato:public Animal{
    public:
    Gato(string,int);
    void muestra() override;
    void habla() override;
};

Gato::Gato(string _nombre, int _a):Animal(_nombre,_a){
}

void Gato::muestra(){
    cout << "Soy el gato " << getNombre() << " tengo " << calculaEdad() << " anos" << endl;
}

void Gato::habla(){
    cout << "MIAU" << endl;
}





#endif //PERRO_H