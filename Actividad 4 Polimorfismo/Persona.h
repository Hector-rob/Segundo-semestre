#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona{
    public:
    Persona();
    Persona(string,string,string,string);
    string getNombre()const;
    string getEstado()const;
    string getCiudad()const;
    string getCp()const;
    void setNombre(string);
    void setEstado(string);
    void setCiudad(string);
    void setCp(string);
    void imprime();
    private:
    string nombre,estado,ciudad,cp;

};

Persona::Persona(){
    nombre = " ";
    estado = " ";
    ciudad = " ";
    cp = " ";
}

Persona::Persona(string _n, string _e, string _c, string _cp){
    nombre = _n;
    estado = _e;
    ciudad = _c;
    cp = _cp;
}

string Persona::getNombre()const{
    return nombre;
}

string Persona::getEstado()const{
    return estado;
}

string Persona::getCiudad()const{
    return ciudad;
}

string Persona::getCp()const{
    return cp;
}

void Persona::setNombre(string _n){
    nombre = _n;
}

void Persona::setEstado(string _e){
    estado = _e;
}

void Persona::setCiudad(string _c){
    ciudad = _c;
}

void Persona::setCp(string _cp){
    cp = _cp;
}

void Persona::imprime(){
    cout << "Nombre: " << nombre << endl;
    cout << "Direccion: " <<estado << " " << ciudad << " " << cp <<endl;
}







#endif //PERSONA_H