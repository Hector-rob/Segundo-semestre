#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "Circulo.h"
#include "Rectangulo.h"
#include "Polygon.h"





int main(){
    Shape* figuras[5];
    figuras[0] = new Circle(1,1,2);
    figuras[1] = new Rectangle(0,0,2,4);
    figuras[2] = new Circle(1,1,3);
    figuras[3] = new Circle(2,3,4);
    figuras[4] = new Rectangle(0,0,2,2);
    for (int i = 0; i < 5; i++){
        cout << figuras[i]->draw() <<endl;
        cout << "El area es:" << figuras[i]-> area() << endl;
        if (Circle* c = dynamic_cast<Circle*>(figuras[i])){ //Dynamic casting, Down casting, 
            cout << "El radio de este circulo es: " << c-> getR() << endl;

        }

    }
    vector <Shape*> figuras2; //Declarar vector de apuntadores a Shape
    figuras2.push_back(new Circle(2,2,8)); //Append 
    figuras2.push_back(new Rectangle(1,1,2,4));
    figuras2.push_back(new Circle(1,1,2));
    cout << "--------------- Con vector ----------------" << endl;
    for (int i = 0; i< figuras2.size(); i++){
        cout << figuras2[i]->draw() << endl;
        //Puedes ver todos los métodos de vector en:
    //https://www.tutorialspoint.com/cpp_standard_library/vector.htm
        
    }











return 0;

}
