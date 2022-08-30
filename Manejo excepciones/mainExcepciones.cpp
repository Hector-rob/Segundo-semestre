#include <vector>
#include <iostream>
#include <exception>
using namespace std;

int main(){

/*vector<int> numeros;
    numeros.push_back(12);
    
    try {
    cout << numeros.at(3) <<endl;
    }
    catch(out_of_range &ex){
        cerr << "Ocurrio una excepcion " << ex.what() << endl;
    }

    cout << "El programa continua"  << endl;*/

   /* int x;
    int y;
    cout <<"Numerador: " << endl;
    cin >> x;
    cout <<"Denominador: " <<endl;
    cin >> y;
    
    while (y == 0){
        try{
            if (y == 0){
            throw("El denominador no puede ser 0");
            }
        }
        catch (const char* msg){
            cerr << msg << endl;
            cout << "Ingrese otro valor para el denominador: " << endl;
            cin >> y;

        }
    }
    cout << "Resultado: " << x/y << endl;*/
    int num;
     while(true){
    cout << "Ingresa un numero entre 0 y 5" << endl;
        cin >> num;
        try {
             if (num < 0 || num > 5){
                 string mensaje = to_string(num) + "es un dato invalido";
                 throw invalid_argument(mensaje);
             }
             break;
        }
        catch(invalid_argument &e){
            cerr << "Ocurrio una excepcion: " << e.what() << endl; 
        }

    }
    cout << num << "Si es un numero entre 0 y 5" << endl;

}
    

