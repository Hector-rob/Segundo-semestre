/*Examen argumentativo TC1030
Hector Robles Villarreal A01634105
*/
#ifndef PAIS_H
#define PAIS_H

#include "Territorio.h"

class Pais:public Territorio{
    public:
    Pais();
    Pais(std::string, double,std::string,std::string);
    std::string getIdioma()const;
    std::string getMoneda()const;
    void setIdioma(std::string);
    void setMoneda(std::string);
    std::string obtenerDatos()override;

    private:
    std::string idioma,moneda;
    
};

Pais::Pais(){
    idioma = " ";
    moneda = " ";
}

Pais::Pais(std::string _n, double _s , std::string _i, std::string _m):Territorio(_n,_s){
    idioma = _i;
    moneda = _m;
}

std::string Pais::getIdioma()const{
    return idioma;
}

std::string Pais::getMoneda()const{
    return moneda;
}

void Pais::setIdioma(std::string _idioma){
    idioma = _idioma;
}

void Pais::setMoneda(std::string _moneda){
    moneda = _moneda;
}

std::string Pais::obtenerDatos(){
    std::string datos;
    datos = "Pais: " + Territorio::obtenerDatos() + "Idioma:" +getIdioma() + " Moneda: " + getMoneda();
    return datos;

}


#endif //PAIS_H