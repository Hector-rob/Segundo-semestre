#ifndef MATRIZCOMPLEJOS_H
#define MATRIZCOMPLEJOS_H
#include "Complejo.h"
#include <iostream>
#include <fstream>

class MatrizComplejos{
    public:
    MatrizComplejos();
    MatrizComplejos(int);
    int getN()const;
    void setN(int);
    Complejo getPos(int,int);
    void setPos(int,int,Complejo&);
    MatrizComplejos suma(MatrizComplejos&);
    void agrega(MatrizComplejos&);
    
    private:
    int n;
    Complejo matriz[20][20];

};

MatrizComplejos::MatrizComplejos(){
    n = 2;
}

MatrizComplejos::MatrizComplejos(int _n){
    if (_n < 2) {
        n = 2;
    }
    else if (_n > 20){
        n = 20;
    }
    else 
    {
        n = _n;
    }

}

int MatrizComplejos::getN()const{
    return n;
}

void MatrizComplejos::setN(int _n){
    if (_n < 2) {
        n = 2;
    }
    else if (_n > 20){
        n = 20;
    }
    else 
    {
        n = _n;
    }
}

Complejo MatrizComplejos::getPos(int n1,int n2){
    Complejo complejo;
    if ((n1 && n2 <= 20) && (n1 && n2 >= 0)){
        complejo = matriz[n1][n2];
        return complejo;
    }
    else {
        std::cout << "Error, posicion invalida" << std::endl;
        complejo.setReal(0);
        complejo.setImaginario(0);
        return complejo;
    }

}

void MatrizComplejos::setPos(int n1, int n2, Complejo& complejo){
    if ((n1 && n2 <= 20) && (n1 && n2 >= 0)){
        complejo = matriz[n1][n2];
    }
    else{
        std::cout << "Error, posicion invalida" << std::endl;
        
    }
}

MatrizComplejos MatrizComplejos::suma(MatrizComplejos& _matriz){
    Complejo complejo;
    double complejoreal;
    double complejoima;
    Complejo complejo2;
    double complejo2real;
    double complejo2ima;
    Complejo complejosuma;
    for (int i = 0; i << 20; i++){
        for (int j = 0; j << 20; j++){
            complejo = matriz[i][j];
            complejoreal = complejo.getReal();
            complejoima = complejo.getImaginario();
            complejo2 = _matriz.getPos(i,j);
            complejo2real = complejo2.getReal();
            complejo2ima = complejo2.getImaginario();
            complejosuma.setReal(complejoreal + complejo2real);
            complejosuma.setImaginario(complejoima + complejo2ima); 
            _matriz.setPos(i,j,complejosuma);
        }
    }
     return _matriz;
}


void MatrizComplejos::agrega(MatrizComplejos& _matriz2){
    Complejo complejo;
    double complejoreal;
    double complejoima;
    Complejo complejo2;
    double complejo2real;
    double complejo2ima;
    Complejo complejosuma;
    
    for (int i = 0; i << 20; i++){
        for (int j = 0; j << 20; j++){
            complejo = matriz[i][j];
            complejoreal = complejo.getReal();
            complejoima = complejo.getImaginario();
            complejo2 = _matriz2.getPos(i,j);
            complejo2real = complejo2.getReal();
            complejo2ima = complejo2.getImaginario();
            complejosuma.setReal(complejoreal + complejo2real);
            complejosuma.setImaginario(complejoima + complejo2ima); 
            matriz[i][j].setReal(complejosuma.getReal());
            matriz[i][j].setImaginario(complejosuma.getImaginario());
        }
    }
}
















#endif //MATRIZCOMPLEJOS_H