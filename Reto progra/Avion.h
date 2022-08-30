#ifndef AVION_H
#define AVION_H
#include "Nave.h"

class Avion:public Nave{
    public:
    Avion();
    Avion(Piloto, string, double,double);
    double getAlturaMax()const;
    void setAlturaMax(double);
    void imprime()override;
    private:
    double altMax;

};

Avion::Avion(){
    altMax = 0;
}


Avion::Avion(Piloto pil, string fab, double p, double _a):Nave(pil,fab,p){
    altMax = _a;
}

double Avion::getAlturaMax()const{
    return altMax;
}

void Avion::setAlturaMax(double _a){
    altMax = _a;
}

void Avion::imprime(){
    Nave::imprime();
    cout << "Altura del avion " << altMax << endl;

}










#endif //BARCO_h