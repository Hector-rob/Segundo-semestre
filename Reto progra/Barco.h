#ifndef BARCO_H
#define BARCO_H
#include "Nave.h"

class Barco:public Nave{
    public:
    Barco();
    Barco(Piloto, string, double,float);
    float getLargo()const;
    void setLargo(float);
    void imprime()override;
    private:
    float largo;

};

Barco::Barco(){
    largo = 0;
}


Barco::Barco(Piloto pil, string fab, double p,float _l):Nave(pil,fab,p){
    largo = _l;
}

float Barco::getLargo()const{
    return largo;
}

void Barco::setLargo(float _l){
    largo = _l;
}

void Barco::imprime(){
    Nave::imprime();
    cout << "Largo del barco: " << largo << endl;

}










#endif //BARCO_h