#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "Shape.h"

class Rectangle:public Shape{
    public:
    Rectangle();
    Rectangle(double, double,double,double);
    double getAlto()const;
    double getAncho()const;
    void setAlto(double);
    void setAncho(double);
    std::string draw() override;
    double area() override;
    private:
    double alto;
    double ancho;

};

Rectangle::Rectangle(){
    alto = 1;
    ancho = 1;
}

Rectangle::Rectangle(double _x, double _y, double _ancho, double _alto):Shape( _x, _y){
    alto = _alto;
    ancho = _ancho;
}

double Rectangle::getAlto()const{
    return alto;
}

double Rectangle::getAncho()const{
    return ancho;
}

void Rectangle::setAlto(double _alto){
    alto = _alto;
}

void Rectangle::setAncho(double _ancho){
    ancho = _ancho;
}

std::string Rectangle::draw(){
    return Shape::draw() + ": RECTANGLE";
}

double Rectangle::area(){
    double area;
    area = ancho*alto;
    return area;

}

#endif //RECTANGLE_H