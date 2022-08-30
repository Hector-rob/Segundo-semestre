/*Escribe la clase CtaComision
  No olvides todos los elementos con los que debe contar: constructores, getters, setters
  y las funciones que deberás sobreescribir para este tipo de cuenta
  
  Usa las siguientes líneas para mostrar los datos de una cuenta por comision.
  CtaBanc:: mostrar(); Recuerda que hace esta línea de código.
  cout <<"Comision: " << comision << endl;*/

#ifndef CtaComision_h
#define CtaComision_h
#include <iostream>
#include "ctaBanc.h"

//Tu clase
class Comision:public CtaBanc{
    public:
    Comision();
    Comision(double, int, double);
    double getComision()const;
    void setComision(double);
    void mostrar();
    void retiro(double);

    private:
    double comision;
};

Comision::Comision(){
    comision = 0;
}

Comision::Comision(double _saldo, int _numCuenta, double _comision): CtaBanc(_saldo, _numCuenta){
    comision = _comision;
}

double Comision::getComision()const{
    return comision;
}

void Comision::setComision(double _comision){
    comision = _comision;
}

void Comision::mostrar(){
    CtaBanc::mostrar();
    std::cout <<"Comision: " << comision << std::endl;
}

void Comision::retiro(double _cantidad){
    double cantidad;
    cantidad = _cantidad + comision;
    CtaBanc::retira(cantidad);
}


#endif //CtaComision_h