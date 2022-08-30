#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H

#include "Vehiculo.h"

class Automovil: public Vehiculo{

  public:
    Automovil();
    Automovil(string, string, string, double, string, int, int);
    ~Automovil();
    //accesores
    string getTransmision()const;
    int getNumeroPuertas() const;
    int getTipoCombustible() const;
    // modificadores
    void setTransmision(string);
    void setNumeroPuertas(int);
    void setTipoCombustible(int);
    //otros métodos 
    void aplicaDescuento(); 
    void imprimeVehiculo(); //Polimorfismo dinámico
    
  private:
    string transmision; // automatica o estandar
    int numeroPuertas; //2,4,5
    int tipoCombustible; // 1= gasolina 2=Hibrido 3=electrico
  
};

Automovil::Automovil(){
  transmision = "estandar"; 
  numeroPuertas = 4;
  tipoCombustible = 1;
}

//1. IMPLEMENTA el constructor con parámetros
Automovil::Automovil(string _m, string _c, string _mo, double _p, string _tr, int _num, int _tipo):Vehiculo(_m,_c,_mo,_p){
    transmision = _tr;
    numeroPuertas = _num;
    tipoCombustible = _tipo;
}
//Destructor
Automovil::~Automovil() {}

//Métodos de acceso
string Automovil::getTransmision()const {return transmision;}
int Automovil::getNumeroPuertas()const {return numeroPuertas;}
int Automovil::getTipoCombustible()const {return tipoCombustible;}

//Métodos modificadores
void Automovil::setTransmision(string transmision_) { transmision = transmision_;}
void Automovil::setNumeroPuertas(int numeroPuertas_) { numeroPuertas = numeroPuertas_;}
void Automovil::setTipoCombustible(int tipoCombustible_) { tipoCombustible = tipoCombustible_;}

//Método para aplicar descuento, se modifica el precio de acuerdo al descuento
void Automovil::aplicaDescuento(){
  // Los automoviles hibridos tienen 5% de descuento del precio y los electricos 10%, sobre el precio
  double descuento = 0;
  double preciof = 0;
  if (tipoCombustible == 2){
      descuento = 0.05 * getPrecio();
      preciof = getPrecio() - descuento;
      setPrecio(preciof);
      cout << "APLICA DESCUENTO!! $" << descuento << endl;
  }
  else if (tipoCombustible == 3){
      descuento = 0.10 * getPrecio();
      preciof = getPrecio() - descuento;
      setPrecio(preciof);
      cout << "APLICA DESCUENTO!! $" << descuento << endl;
      

  }
    //2. AGREGA lo que falta, debe calcular el descuento y modificar el precio del vehículo
      
    
    //3. AGREGA lo que falta, debe calcular el descuento y modificar el precio del vehículo
      
}

//Agrega lo que se te pide pero NO modifiques nada más, observa lo que hace
void Automovil::imprimeVehiculo(){
  string comb;
  if (tipoCombustible == 1)
    comb = "GASOLINA";
  else if (tipoCombustible == 2)
    comb = "HIBRIDO";
  else
    comb = "ELECTRICO";
  cout << "AUTOMOVIL " << comb << endl;
  aplicaDescuento();
  // 4. AGREGA la impresión base de Vehiculo
  Vehiculo::imprimeVehiculo();
  cout << "PUERTAS: " << numeroPuertas << " TRANSMISION: " << transmision << endl;
  
}

#endif //AUTOMOVIL_H