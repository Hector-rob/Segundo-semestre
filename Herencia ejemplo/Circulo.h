#ifndef CIRCULO_H
#define CIRCULO_H
#include "Shape.h"

const double PI = 3.1415;

class Circle:public Shape{
    public:
    Circle();
    Circle(double,double,double);
    double getR()const;
    void setR(double);
    std::string draw() override;
    double area() override;
    private:
    double r;
};

Circle::Circle(){
    r = 1;
}

Circle::Circle(double _x, double _y, double _r):Shape(_x, _y){
    r = _r;

}

double Circle::getR()const{
    return r;
}

void Circle::setR(double _r){
    r = _r;
}

std::string Circle::draw(){
    return Shape::draw() + ":CIRCLE";
}

double Circle::area(){
    double area;
    area = PI * r * r;
    return area;
}
#endif //CIRCULO_H