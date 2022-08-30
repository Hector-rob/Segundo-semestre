#ifndef FRACCION_H
#define FRACCION_H

#include <iostream>

class Fraccion {    
    public:
        //Constructores
        Fraccion();
        Fraccion(int, int); // primero el numerador y luego el denominador

        //Metodos de acceso
        int getNum() const;
        int getDen() const;

        //Metodos de modificacion
        void setNum(int);
        void setDen(int);

        // Otros métodos
        double valorDecimal();

        // sobrecargas
        // a) suma 2 fracciones
        Fraccion operator+(const Fraccion&);   
        // b) Operador unitario -. Devuelve la Fraccion pero negativa. NOTA que solo debe cambiar el signo al numerador
        Fraccion operator-();
        // c) == igual. Compara el valor en decimal de ambas fracciones
        bool operator==(Fraccion&);
        // d) + suma fraccion + entero. Ejemplo f3 = f1 + 5;
        Fraccion operator + (int);
        // e) ++ incrmenta 1 entero. Ejemplo f3 = ++f1;
        Fraccion operator ++ ();
        // f) += suma. Ejemplo:   f1 += f2;
        void operator += (const Fraccion&);
        // Sobrecarga de operador de flujo de salida <<
        friend std::ostream& operator<< (std::ostream &, const Fraccion&);

    
    private:
        // atributos
        int num;
        int den;
};

//Constructores
Fraccion::Fraccion() {
    num = 1;
    den = 1;
}

Fraccion::Fraccion(int n, int d) { // primero el numerador y luego el denominador 
    num = n;
    den = d;
}

//Metodos de acceso
int Fraccion::getNum() const {
    return num; 
}

int Fraccion::getDen() const {
    return den; 
}

//Metodos de modificacion
void Fraccion::setNum(int n) {
    num = n; 
} 

void Fraccion::setDen(int d) { 
    den = d; 
}

//Funcion  para calcular el valor decimal
double Fraccion::valorDecimal() {
    return (double)num / den;
}

// 1. Suma 2 fracciones
Fraccion Fraccion::operator+(const Fraccion& otra){
    int num_n = ((den * otra.num) + (num * otra.den));
    int den_n = den*otra.den;
    Fraccion f3(num_n, den_n);
    return f3; 
}


// 2. Sobrecarga de operador unitario -. Para hacer negativa la fraccion. NOTA que solo debe cambiar el signo al numerador
Fraccion Fraccion::operator-(){
    int num_n = num * -1;
    Fraccion f(num_n, den);
    return f; 
}

// 3. Sobrecarga de operador ==. Compara el valor en decimal de ambas fracciones
bool Fraccion::operator==(Fraccion& otra){
    return valorDecimal() == otra.valorDecimal();
}

// 4. Sobrecarga de operador + para sumar fraccion + entero.
Fraccion Fraccion::operator + (int n){
    int numerador = (n*den) + num;
    return Fraccion(numerador, den);
}

// 5. Sobrecarga del operador de flujo de salida 
std::ostream& operator<< (std::ostream & salida, const Fraccion& f){
    salida << f.num << " / " << f.den;
    return salida;
}    

// 6. Sobrecarga de operador ++ incrementa 1 entero. Ejemplo f3 = ++f1  preincremento
Fraccion Fraccion::operator ++ (){
    *this = *this + 1;
    return *this;
}

// 7. Sobrecarga de operador += suma. Ejemplo:   f1 += f2;
void Fraccion::operator += (const Fraccion& otra){
    *this = *this + otra;
}    

#endif //FRACCION_H