#include <vector>
#include <iostream>
#include <exception>
using namespace std;

int main(){
    int num;
    int intentos = 5;
    while(true){
        cout<<  "Ingresa un numero entre 1 y 100" << endl;
        cin >> num;
        try{
            if (num < 1 || num > 100){
                intentos--;
                if (intentos == 0){
                    cout << "Ya no tienes mas intentos" << endl;
                    break;
                }
                throw ("El numero no esta entre 1 y 100");
            }
            else{
                cout << "Excelente" << endl;
                cout << "Tu numero fue: " << to_string(num) << endl;
                break;
            }
        }
        catch (const char* msg){
            cerr << msg << endl;
            cout << "Te quedan " + to_string(intentos) + " intentos" << endl;
        }
    }

}
    

