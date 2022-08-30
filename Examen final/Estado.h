/*Examen argumentativo TC1030
Hector Robles Villarreal A01634105
*/

#ifndef ESTADO_H
#define ESTADO_H

#include "Territorio.h"

class Estado:public Territorio{
    public:
    Estado();
    Estado(std::string,double, double);
    double getPresupuesto()const;
    void setPresupuesto(double);
    std::string obtenerDatos()override;

    private:
    double presupuesto;
};

Estado::Estado(){
    presupuesto = 0;
}

Estado::Estado(std::string _n, double _s, double _p):Territorio(_n,_s){
    presupuesto = _p;
}

double Estado::getPresupuesto()const{
    return presupuesto;
}

void Estado::setPresupuesto(double _p){
    presupuesto = _p;
}

std::string Estado::obtenerDatos(){
    std::string datos;
    datos = "Estado: " + Territorio::obtenerDatos() + "Presupuesto:$ " + std::to_string(getPresupuesto());
    return datos;

}


#endif //ESTADO_H