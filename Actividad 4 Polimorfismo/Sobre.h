#ifndef SOBRE_H
#define SOBRE_H

#include "Envio.h"


class Sobre:public Envio{
    public:
    Sobre();
    Sobre(Persona,Persona,double,double,double,double);
    double calculaCosto() override;
    private:
    double costoEstandar,largo,ancho,cargoAdicional;
};
   

Sobre::Sobre(){
    largo = 0;
    ancho = 0;
    cargoAdicional = 0;
}

Sobre::Sobre(Persona r, Persona d, double costo, double _l, double _a,double _c):Envio(r,d,costo){
    largo = _l;
    ancho = _a;
    cargoAdicional = _c;
    costoEstandar = costo;

}

double Sobre::calculaCosto(){ //MAYBE YES MAYBE NOT
    double costo;
    if ((largo > 25) && (ancho > 30)){
        costo = costoEstandar + cargoAdicional;
    }
    else{
        costo = costoEstandar;
    }
    return costo;
}
#endif //SOBRE_H