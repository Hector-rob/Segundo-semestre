#include <iostream>
#include <string>
using namespace std;
#include "Circulo.h"
#include "Rectangulo.h"
#include "Polygon.h"



int* ejemplo(){
    static int x = 88; //Usar static
    int* ptrInt = &x;
    int* ptrInt60 = new int(90); //Darle este valor en la direccion de memoria del apuntador
    return ptrInt60;
}
int main(){
    //Apuntadores son variables especiales que guardan direcciones de memorias
    int* ptrInt;
    int valor = 5;
    ptrInt = &valor;
    cout << "La direccion de memoria de la variable valor es: "  << ptrInt << endl;
    cout << "Direccion de memoria de valor: "<< &valor  << endl;
    cout << "El valor del la direccion de memoria de ptrInt: " << *ptrInt <<endl;
    int* ptrInt2;
    ptrInt2 = new int(10); //Creación dinámica
    cout << "La direccion de memoria de la variable valor es: "  << ptrInt2 << endl;
    cout << "El valor del la direccion de memoria de ptrInt2: " << *ptrInt2 <<endl;
    int* ptrInt3 = ejemplo();
    cout << *ptrInt3 <<endl;

    Circle c1(2,4,5);
    Circle* ptrC1 = &c1;
    cout << (*ptrC1).draw() << endl; //Se puede desreferenciar y se usan los parentésis
    cout << ptrC1 ->draw() << endl;; // con la flechita apunta al objeto que tiene, es el método mas común
    Circle* ptrCircle = new Circle(-1,1,4); //Creación dinámica de objeto 
    cout << ptrCircle ->draw() << endl;
    ptrCircle = NULL; //Hacer que un apuntador no apunte a nada
    delete ptrCircle; //Borra apuntador y libera espacio en memoria
    









}
