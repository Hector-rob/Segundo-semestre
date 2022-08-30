#ifndef POLYGON_H
#define POLYGON_H
#include "Shape.h"

class Polygon:public Shape{
    public:
    Polygon();
    Polygon(double,double,double);
    double getN()const;
    void setN(double);
    std::string draw()override;
    private:
    double n;
};

Polygon::Polygon(){
    n = 1;
}

Polygon::Polygon(double _x, double _y, double _n):Shape(_x, _y){
    n = _n;
}


double Polygon::getN()const{
    return n;
}

void Polygon::setN(double _n){
    n = _n;
}

std::string Polygon::draw(){
    return Shape::draw() + ":POLYGON";
}
#endif //POLYGON_H