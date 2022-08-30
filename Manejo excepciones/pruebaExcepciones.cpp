#include <vector>
#include <iostream>
#include <exception>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int posicion;
    int intentos = 5;
    while(true){
        cout << "Ingresa la posicion a la que deseas acceder:" << endl;
        cin >> posicion;
        try{
            if (posicion >= 10 || posicion < 0){
                intentos--;
                if (intentos == 0){
                    cout << "No te quedan intentos" << endl;
                    break;
                }
                throw ("Posicion invalida");
            }
            else{
                cout << arr[posicion] << endl;
                break;
            }
        }
        catch (const char* msg) {
            cerr << msg << endl;
            cout << "Te quedan " + to_string(intentos) + " intentos" << endl;
        }
        

    }

}
    

