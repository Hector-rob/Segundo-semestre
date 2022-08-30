#ifndef NAVE_H
#define NAVE_H
#include <iostream>
#include "Piloto.h"

class Nave:public Piloto{
    public:
    Nave();
    Nave(Piloto, std::string, double);
    std::string getFab()const;
    double getPrecio()const;
    Piloto getPiloto()const;
    void setFab();
    void setPrecio();
    void setPiloto();
    void imprime()override;
    private:
    std::string fabricante;
    double precio;
    Piloto piloto;
};

Nave::Nave(){
    fabricante = " ";
    precio = 0;
}

Nave::Nave(Piloto pil, string fab, double p):Piloto(pil){
    fabricante = fab;
    precio = p;
}

string Nave::getFab()const{
    return fabricante;
}

double Nave::getPrecio()const{
    return precio;
}

Piloto Nave::getPiloto()const{
    return piloto;
}

void Nave::imprime(){
    cout << "Fabricante: " <<fabricante << endl;
    cout << "Precio: " << precio << endl;
    cout << "Piloto:" << endl;
    Piloto::imprime();
}










#endif //NAVE_H