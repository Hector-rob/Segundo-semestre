//Escribe la clase Complejo de acuerdo a las instrucciones de Canvas.
//Recuerda que al imprimir se despliegue en el formato que te piden y sin espacios entre los caracteres 

#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>

class Complejo{
    public:
    Complejo();
    Complejo(double, double);
    double getReal()const;
    double getImaginario()const;
    void setReal(double);
    void setImaginario(double);
    void agregar(Complejo);
    Complejo conjugado();
    Complejo suma(Complejo);
    Complejo suma1(Complejo);
    Complejo multiplicacion(Complejo);
    Complejo multiEscalar(double);
    void imprime();
    
    private:
    double real;
    double imaginario;

};

Complejo::Complejo(){
    real = 0;
    imaginario = 0;
}

Complejo::Complejo(double _real , double _imaginario){
    real = _real;
    imaginario = _imaginario;
}

double Complejo::getReal()const{
    return real;
}

double Complejo::getImaginario()const{
    return imaginario;
}

void Complejo::setReal(double _real){
    real = _real;
}

void Complejo::setImaginario(double _imaginario){
    imaginario = _imaginario;
}

void Complejo::agregar(Complejo _c){
    real = (real + _c.getReal());
    imaginario = (imaginario + _c.getImaginario());
}

Complejo Complejo::conjugado(){
        Complejo c;
        c.setReal(real);
        c.setImaginario(imaginario * -1);
        return c;
}
    
Complejo Complejo::suma(Complejo _c){
    _c.setReal(real + _c.getReal());
    _c.setImaginario(imaginario + _c.getImaginario());
    return _c;
}

Complejo Complejo::suma1(Complejo _c){
    real = real + _c.getReal();
    imaginario = imaginario + _c.getImaginario();
    _c.setReal(real);
    _c.setImaginario(imaginario);
    return _c;
}

Complejo Complejo::multiplicacion(Complejo _c){
    Complejo c;
    c.setReal((real * _c.getReal()) - (imaginario * _c.getImaginario()));
    c.setImaginario((real * _c.getImaginario()) + (imaginario * _c.getReal()));
    return c;
}

Complejo Complejo::multiEscalar(double _num){
    Complejo c;
    c.setReal(real * _num);
    c.setImaginario(imaginario * _num);
    return c;
}

void Complejo::imprime(){
    if (imaginario < 0){
        std::cout << "(" << real << "-" << imaginario * -1 << "i" << ")" << std::endl;
    }
    else if (imaginario > 0) {
        std::cout << "(" << real << "+" << imaginario << "i" << ")" << std::endl;
    }
}

#endif //COMPLEJO_H