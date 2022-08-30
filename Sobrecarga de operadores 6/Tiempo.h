#ifndef TIEMPO_H
#define TIEMPO_H

#include <iostream>

/*
 Implementa los funciones faltantes de la Clase Tiempo
 El valor de hora puede ser cualquier valor positivo
 El valor de minutos debe ser un valor entre 0 y 59
 Al realizar cualquier operación, el tiempo (hora y minutos) debe quedar con valores válidos
 */
class Tiempo {

public:
    Tiempo();
    Tiempo(int h, int m);
    void setHora(int h);
    void setMinu(int m);
    int getHora() const;
    int getMinu() const;
    /*1. Agrega las definiciones de los métodos siguientes:*/
    // Miembro de la clase. operador ++ incrementa el Tiempo en 1 minuto y regresa el tiempo
    Tiempo operator++();
    //Friend. operador -- decrementa el Tiempo en 1 minuto y regresa el tiempo
    friend Tiempo operator--(Tiempo&);
    // si la hora es 0:0 y se pide decrementar, regresa 0:0
    // Miembro de la clase. operador > Compara si el primer Tiempo es mayor que el segundo
    bool operator>(const Tiempo&);
    // Miembro de la clase. operador + Para sumar tiempo + minutos, regresa un tiempo como resultado
    Tiempo operator+(const int&);
    // Friend. operador + Para sumar minutos + tiempo, regresa un tiempo como resultado
    friend Tiempo operator+(const int&, const Tiempo&);
    // Miembro de la clase. operador + Suma t1 con t2 y regresa un tiempo con el resultado
    Tiempo operator+(const Tiempo&);
    // Friend. operador += Suma t1 con t2 y deja el resultado en t1, no regresa nada
    friend void operator +=(Tiempo&, const Tiempo&);
    // Sobrecarga el operador de salida
    friend std::ostream& operator<< (std::ostream&, const Tiempo&);
  
private:
    int hora;
    int minu;
};

Tiempo::Tiempo() {
    hora = 0;
    minu = 0;
}

Tiempo::Tiempo(int h, int m) {
    hora = h;
    minu = m;
}

void Tiempo::setHora(int h) {
    hora = h;
}

void Tiempo::setMinu(int m) {
    minu = m;
}

int Tiempo::getHora() const{
    return hora;
}

int Tiempo::getMinu() const{
    return minu;
}

// Escribe TODOS los métodos que faltan.

Tiempo Tiempo::operator++(){
    if (minu == 59){
        minu = 0;
        hora = hora +1;
    }
    else {
        minu = minu + 1;  
    }
    Tiempo t(hora,minu);
    return t;
}

Tiempo operator--(Tiempo& _t){
    if (_t.getHora() == 0 && _t.getMinu() == 0){
        _t.setHora(0);
        _t.setMinu(0);
        return _t;
    }
    else if (_t.getHora()!=0 && _t.getMinu()==0){
        int newhora = _t.getHora() -1;
        int newmin = 59;
        _t.setHora(newhora);
        _t.setMinu(newmin);
        return _t;

    }
    else{
        _t.setHora(_t.getHora());
        _t.setMinu(_t.getMinu()-1);
        return _t;
    }

}

bool Tiempo::operator>(const Tiempo& _t){
    if (hora > _t.getHora()){
        return true;
    }
    else if(hora < _t.getHora()){
        return false;
    }
    else if(minu > _t.getMinu()){
        return true;
    }
    else{
        return false;
    }
}

Tiempo Tiempo::operator+(const int& _n){
    if (minu + _n > 59){
        int newhora = (minu + _n)/60;
        int newmin = minu+_n -(60*newhora);
        Tiempo t(hora+newhora,newmin);
        return t;
    }
    else{
        Tiempo t(hora,minu+_n);
        return t;
    }

}

Tiempo operator+(const int& n, const Tiempo& _t){
    int minunew = _t.getMinu() + n;
    int horanew = minunew/60;
    int horanew1 = _t.getHora();
    if (minunew > 59){
        minunew = minunew -(60*horanew);
        int horanew1 = _t.getHora() + horanew;
        Tiempo t(horanew1,minunew);
        return t;   
    }
    Tiempo t(horanew1,minunew);
    return t;
}

Tiempo Tiempo::operator+(const Tiempo& t1){
    int newmin = t1.minu + minu;
    int newhora = newmin/60;
    int horasumada = t1.hora + hora;
    if (newmin > 59){
        newmin = newmin -60;
        int horasumada = t1.getHora() + newhora + hora ;
        Tiempo t(horasumada,newmin);
        return t;
    }
    Tiempo t(hora + t1.hora ,newmin);
    return t;







}
void operator+=(Tiempo& t1, const Tiempo& t2){
    int minunew = t1.getMinu() + t2.getMinu();
    int horanew = t1.getHora() + t2.getHora();
    if (minunew > 59){
        minunew = minunew -60;
        horanew = horanew + 1;
    }

    t1.setHora(horanew);
    t1.setMinu(minunew);

}

//Escribe el encabezado de esta función, es la que sobrecarga al operador <<
std::ostream& operator<<(std::ostream& salida, const Tiempo& t){
    salida <<t.hora<<":";
    if (t.minu<10){
        salida << "0" <<t.minu;
    }
    else{
        salida << t.minu;
    }
    return salida;
}

#endif //TIEMPO_H