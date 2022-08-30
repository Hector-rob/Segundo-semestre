#include <iostream>
#include <fstream>
using namespace std;

#include "MatrizComplejos.h"



int main() {
    MatrizComplejos matriz;
    Complejo c;
    for (int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            c.setReal(i);
            c.setImaginario(j);
            matriz.setPos(i,j,c);
            matriz.getPos(i,j).imprime();

        }
    }
    







return 0;
}
