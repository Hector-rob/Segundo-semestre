/* Clase CtaBanc
   Define una cuenta bancaria sencilla
   ---Completa el código que hace falta*/

#ifndef CtaBanc_h
#define CtaBanc_h
#include <iostream>

class CtaBanc {
public:
    CtaBanc();
    CtaBanc(int, double);
    int getNumCuenta() const;
    void setNumCuenta(int);
    void setSaldo(double);
    double getSaldo() const;
    void deposita(double);
    bool retira(double);  //  Éste método se debe redefinir en la clase Cuenta comision
    void mostrar();           // Éste método se debe redefinir en la clase Cuenta comision
private:
    int numCuenta;
    double saldo;
};

CtaBanc::CtaBanc() {
    numCuenta = 0;
    saldo = 0;
}

CtaBanc::CtaBanc(int n, double s) {
    numCuenta = n;
    saldo = s;
}

int CtaBanc::getNumCuenta() const {
    return numCuenta;
}

void CtaBanc::setNumCuenta(int n) {
    numCuenta = n;
}
    
void CtaBanc::setSaldo(double s) {
    saldo = s; 
}

double CtaBanc::getSaldo() const{
    return saldo;
}

void CtaBanc::deposita(double cant) {
    saldo += cant;
}

// si hay suficiente saldo resta cant del saldo de la cuenta y manda true, si no hay suficiente saldo, solo manda false
bool CtaBanc::retira(double cant){
    if (cant < saldo){
        saldo = saldo - cant;
        return true;
    }
    else{
        return false;
    }
    // Escribe el código que hace falta
}

void CtaBanc::mostrar() {
    std::cout << "Cuenta: "<< numCuenta<<"\t";
    std::cout << "Saldo: "<<saldo<<std::endl;
}

#endif //CtaBanc_h