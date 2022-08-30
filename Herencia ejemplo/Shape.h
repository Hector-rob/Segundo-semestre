#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

class Shape{
    public:
    Shape();
    Shape(double, double);
    int getX()const;
    int getY()const;
    void setX(double);
    void setY(double);
    virtual std::string draw();
    virtual double area() = 0; //Metodo virtual puro

    private:
    double x;
    double y;
};

Shape::Shape(){
    x = 0;
    y = 0;
}

Shape::Shape(double _x, double _y){
    x = _x;
    y = _y;
}

int Shape::getX()const{
    return x;
}

int Shape::getY()const{
    return y;
}

void Shape::setX(double _x){
    x = _x;
}

void Shape::setY(double _y){
    y = _y;
}

std::string Shape::draw(){
    return "Soy una figura";
}

#endif //SHAPE_H

