#ifndef ENVIO_H
#define ENVIO_H

#include "Persona.h"

class Envio{
    public:
    Envio();
    Envio(Persona,Persona,double);
    double getCostoEnvio()const;
    void setCostoEnvio(double);
    Persona getRemitente()const;
    Persona getDestinatario()const;
    virtual double calculaCosto() = 0;



    private:
    double costoEnvio;
    Persona remitente;
    Persona destinatario;

};

Envio::Envio(){
    costoEnvio = 0;
}

Envio::Envio(Persona _remitente, Persona _destinatario, double _costo){
    remitente = _remitente;
    destinatario = _destinatario;
    costoEnvio = _costo;
}

double Envio::getCostoEnvio()const{
    return costoEnvio;

}

void Envio::setCostoEnvio(double _c){
    costoEnvio = _c;
}

Persona Envio::getRemitente()const{
    return remitente;
}

Persona Envio::getDestinatario()const{
    return destinatario;
}



#endif //ENVIO_H