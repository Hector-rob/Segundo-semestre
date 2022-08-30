// Escribe aquí la clase Vendedor

// usa estos cout para COMPLETAR el despliegue de los datos de un vendedor
// recuerda que un vendedor es también un Empleado
//    cout << " %comision " << porcentajeComision;
//    cout << " ventas " << ventas << endl;


#ifndef Vendedor_h
#define Vendedor_h
#include <iostream>
#include "Empleado.h"

//Escribe tu clase Vendedor
class Vendedor: public Empleado{
    public:
    Vendedor();
    Vendedor(int, double,double,double);
    double getVentas()const;
    double getPorCom()const;
    void setVentas(double);
    void setCom(double);
    void muestra();
    double calculaPago();
    private:
    double ventas;
    double porCom;

};

Vendedor::Vendedor(){
    ventas = 0;
    porCom = 0;
}

Vendedor::Vendedor(int _ident, double _sueldo, double _porCom, double _ventas):Empleado(_ident, _sueldo){
    ventas = _ventas;
    porCom = _porCom;
}

double Vendedor::getVentas()const{
    return ventas;
}

double Vendedor::getPorCom()const{
    return porCom;
}

void Vendedor::setVentas(double _ventas){
    ventas = _ventas;
}

void Vendedor::setCom(double _porCom){
    porCom = _porCom;
}

void Vendedor::muestra(){
    Empleado::muestra();
    std::cout << " %comision " << porCom;
    std::cout << " ventas " << ventas << std::endl;
}

double Vendedor::calculaPago(){
    double sueldo;
    sueldo = getSueldo() + porCom*ventas;
    return sueldo;

}



#endif //Vendedor_h