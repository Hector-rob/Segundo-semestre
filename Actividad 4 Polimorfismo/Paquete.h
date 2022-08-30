#ifndef PAQUETE_H
#define PAQUETE_H

#include "Envio.h"

class Paquete:public Envio{
    public:
    Paquete();
    Paquete(Persona, Persona, double, double,double);
    private:
    double peso,costoKg;
    double calculaCosto()override;


};

Paquete::Paquete(){
    peso = 0;
    costoKg = 0;
}
Paquete::Paquete(Persona r, Persona d, double costo, double _p, double _c):Envio(r,d,costo){
    if(_p < 0){
        peso = 0;
    }
    else{
        peso = _p;
    }
    if(_c < 0){
        costoKg = 0;
    }
    else{
        costoKg = _c;
    }
}

double Paquete::calculaCosto(){
    double costo;
    costo = (costoKg * peso) + getCostoEnvio();
    return costo;
}






#endif //PAQUETE_H