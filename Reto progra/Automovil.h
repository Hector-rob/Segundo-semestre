#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
#include "Nave.h"

class Automovil:public Nave{
    public:
    Automovil();
    Automovil(Piloto, string, double,string);
    string getColor()const;
    void setColor(string);
    void imprime()override;
    private:
    string color;

};

Automovil::Automovil(){
    color = " ";
}

Automovil::Automovil(Piloto pil, string fab, double p, string _c):Nave(pil,fab,p){
    color = _c;
}

string Automovil::getColor()const{
    return color;
}

void Automovil::setColor(string _c){
    color = _c;
}
void Automovil::imprime(){
    Nave::imprime();
    cout << "Color del automovil" << color << endl;

}










#endif //BARCO_h