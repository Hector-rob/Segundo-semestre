//Hector Robles A01634105
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
#include "Barco.h"
#include "Automovil.h"
#include "Avion.h"

int main(){
    Nave* listaNaves[10];
    Piloto* listaPilotos[10];

    ifstream archivo;
    archivo.open("entrada.txt");
    char tipo;
    string cosa, nombre, nacionalidad, fabricante, color; 
    int numLicencia, i=0, j=0, k=0;
    double precio, alturaMax;
    float largo; 
    if (archivo.is_open()){ //Si pudo abrir el archivo
        string linea;
        while(getline(archivo,linea)){ //leo la primera línea
            stringstream sstr(linea); // Declaro un stringstream para poder leer los datos separados por ","
            string dato;
            vector<string> datos; //un vector para guardar cada dato del renglón
            while (getline(sstr, dato,',')) { 
                datos.push_back(dato); //Por cada dato del renglón lo agrego al vector
            }
            //en la posición 0 obtengo el char de tipo de vehículo
            for(int g = 0; g < datos.size(); g++){
                cosa =datos[0];
            if (cosa == "Pil"){
                nombre = datos[1];
                nacionalidad = datos[2];
                numLicencia = stoi(datos[3]);
                listaPilotos[j] = new Piloto(nombre,nacionalidad,numLicencia);
                j++;
            }
            }
             cosa = datos[0];
                if (cosa == "Barco"){ 
                    fabricante = datos[1];
                    precio = stod(datos[2]);
                    largo = stof(datos[3]);
                    nombre = listaPilotos[k]->getNombre();
                    nacionalidad = listaPilotos[k]->getNacionalidad();
                    numLicencia = listaPilotos[k] -> getNumLicencia();
                    Piloto pil(nombre,nacionalidad,numLicencia);
                    listaNaves[k] = new Barco(pil,fabricante,precio,largo);
                    k++;
                }
                else if(cosa == "Avion"){
                    fabricante = datos[1];
                    precio = stod(datos[2]);
                    alturaMax = stod(datos[3]);
                    nombre = listaPilotos[k]->getNombre();
                    nacionalidad = listaPilotos[k]->getNacionalidad();
                    numLicencia = listaPilotos[k] -> getNumLicencia();
                    Piloto pil(nombre,nacionalidad,numLicencia);
                    listaNaves[k] = new Avion(pil,fabricante,precio,alturaMax);
                    k++;
                }
                 else if(cosa == "Automovil"){
                    fabricante = datos[1];
                    precio = stod(datos[2]);
                    color = datos[3];
                    nombre = listaPilotos[k]->getNombre();
                    nacionalidad = listaPilotos[k]->getNacionalidad();
                    numLicencia = listaPilotos[k] -> getNumLicencia();
                    Piloto pil(nombre,nacionalidad,numLicencia);
                    listaNaves[k] = new Automovil(pil,fabricante,precio,color);
                    k++;
                }
            }

            
            
        }     
        archivo.close(); //Se acabaron los renglones del archivo, cierro el archivo
        for (int h = 0; h < k; h++){
            listaNaves[h] -> imprime();
        }

    return 0;
}