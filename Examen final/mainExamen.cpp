#include <iostream>
using namespace std;
#include "Pais.h"
#include "Estado.h"

int main(){
    Territorio* territorios[5];
    territorios[0] = new Territorio("Territorio 2",890678999);
    territorios[1] = new Pais("Mexico",890678999,"Espanol","pesos");
    territorios[2] = new Pais("Japon", 7777, "Japones", "Yen");
    territorios[3] = new Estado("Jalisco",89999,10000);
    territorios[4] = new Estado("Tokio",87785,30000000);
    for (int i = 0; i < 5; i++){
        std::string salida;
        salida = territorios[i] -> obtenerDatos();
        cout << salida <<endl;
    }









    return 0;
}