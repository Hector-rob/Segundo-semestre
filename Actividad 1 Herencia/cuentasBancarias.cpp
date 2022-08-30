// Aquí no denes modificar nada
#include <iostream>
using namespace std;

#include "ctaComision.h"
#include "ctaBanc.h"

int main() {
    Comision cc;
    CtaBanc cb;
    int numCta;
    double saldo, com;
    
    //cout << "Teclea el numero de cuenta de la cuenta bancaria "; Deja esta línea como comentario
    cin >> numCta;
    cb.setNumCuenta(numCta);
    
    //cout << "Teclea el saldo inicial para el cliente de la cuenta bancaria "; Deja esta linea como comentario
    cin >> saldo;
    
    cb.setSaldo(saldo);
    
    //cout << "Teclea el numero de cuenta con comisión "; Deja esta linea como comentario
    cin >> numCta;
    
    cc.setNumCuenta(numCta);
    
    //cout << "Teclea el saldo inicial para el cliente de la cuenta con comisión "; Deja esta linea como comentario
    cin >> saldo;
    
    cc.setSaldo(saldo);
    
    //cout << "Teclea  la comision por retiro "; Deja esta línea como comentario
    cin >> com;
    
    cc.setComision(com);
    
    cout << "Los datos de la cuenta bancaria son " << endl;
    cb.mostrar();
    
    cout << "Los datos de la cuenta con comisión son " << endl;
    cc.mostrar();
    
    cb.retira(100);
    cc.retiro(100);
    
    cout << "despues de retirar datos de cuenta bancaria " << endl;
    cb.mostrar();
    
    cout << "despues de retirar datos de cuenta con comision " << endl;
    cc.mostrar();

    return 0;
}


