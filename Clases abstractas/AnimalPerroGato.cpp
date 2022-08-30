
#include "Animal.h"
#include "Perro.h"
#include "Gato.h"
#include <iostream>
using namespace std;

int main(){
    Animal* arr[3];
    Animal* arr2[3];
    char opcion;
    cin >> opcion;
    switch(opcion){
        case ('a'):
        arr[0] = new Gato("Silvestre", 1947);
        arr[1] = new Perro("Fido", 2008);
        arr[2] = new Gato("Tom", 1940);
        arr[0]-> muestra();
        arr[0]-> habla();
        arr[1]-> muestra();
        arr[1]-> habla();
        arr[2]-> muestra();
        arr[2]-> habla();
        case('b'):
        char tipo;
        string nombre;
        int ano;

        for (int i = 0; i< 3; i++){
        cin >> tipo;
        cin >> nombre;
        cin >> ano;
        if (tipo == 'g'){
            arr2[i] = new Gato(nombre,ano);
        }
        else if (tipo == 'p'){
            arr2[i] = new Perro(nombre,ano);
        }
        }
        for(int i = 0; i<3; i++){
            arr2[i]->muestra();
            arr2[i]->habla();
        }
        
        

    
    };








    return 0;
}