#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
using namespace std;

#include "PersonajeP.h"
#include "PersonajeS.h"


//MANEJO EXCEPCIONES
int excepcion(int opcion){
    if(opcion != 1 && opcion != 2 && opcion !=3){
        throw "Lo que ingresaste no es válido";
    }
    else{
        return opcion;
    }
}

int excepcion1(int opcion){
    if(opcion != 1 && opcion != 2){
        throw "Lo que ingresaste no es válido";
    }
    else{
        return opcion;
    }
}

int excepcion2(int opcion){
    if(opcion != 1){
        throw "Lo que ingresaste no es válido";
    }
    else{
        return opcion;
    }
}


int main(){
    
    //DECLARACION DE HABITACIONES, PERSONAJES, ITEMS
    vector <string> descripciones;
    vector <Habitacion> rooms;
    vector <Item> items;
    vector <PersonajeS> monigotesS;


    descripciones.push_back("Comedor de la casa de Alejandra, tiene una mesa rectangular para 8 personas");
    descripciones.push_back("Sala de cardiología. Aquí esperan los pacientes a ser pasados a los consultorios");
    descripciones.push_back("Consultorio muy ordenado, con diplomas y reconocimientos por todos lados.");
    descripciones.push_back("Sala amplia y fría con aparatos extraños y una mesa de metal.");
    descripciones.push_back("Bata de la Dra. Fiji. Huele muy bien");
    descripciones.push_back("Tu expediente. Contiene una descripcion de prolapso de la válvula mitral y su operación");
    descripciones.push_back("Bisturí ensangrentado y con olor a limpiadores químicos");
    descripciones.push_back("Foto que muestra tu cádaver. Sales muy guapa.");
    descripciones.push_back("El papá de Ale. Fornido, apuesto y muy trabajdor. Cabello negro azabache");
    descripciones.push_back("La madre de Ale. Alta, pelirroja, esbelta y cariñosa");
    descripciones.push_back("Una doctora joven, ambiciosa, muy atractiva, con múltiples doctorados en cardiología.");
    descripciones.push_back("Doctor muy inteligente y dedicado, novio de Alejandra. Tiene un cuerpo escultural");
    descripciones.push_back("Niño con problemas mentales, de buen corazón.");
    descripciones.push_back("Una joven alegre, pequeña, inocente, noble, de cabello castaño claro y chino. Tez clara.");
    rooms.push_back(Habitacion ("Comedor de la casa",descripciones[0],0));
    rooms.push_back(Habitacion ("Sala de cardiología",descripciones[1],1));
    rooms.push_back(Habitacion ("Consultorio de la Dra.Fiji",descripciones[2],2));
    rooms.push_back(Habitacion ("Quirofano",descripciones[3],1));
    monigotesS.push_back(PersonajeS("Alejandro Veru",56,descripciones[8]));
    monigotesS.push_back(PersonajeS("Andrea Ciel",55,descripciones[9]));
    monigotesS.push_back(PersonajeS("Dra. Carmelita Fiji",30,descripciones[10]));
    monigotesS.push_back(PersonajeS("Dr. Roberto Dorn",32,descripciones[11]));
    monigotesS.push_back(PersonajeS("Jann Escoria",11,descripciones[12]));
    PersonajeP Alejandra("Alejandra Veru",28,rooms[0],descripciones[13]);

    //INTRODUCCION E INSTRUCCIONES
    cout << endl;
    cout << "Bienvenid@ a 'Das geheimnisvoll Geheimnis'" << endl <<endl;
    cout << "INSTRUCCIONES: " << endl << endl;
    cout << "Este es un juego de decisiones, las cuales moldean el desarrollo del juego." << endl;
    cout <<"En cada caso te saldrán 3 opciones."  << endl;
    cout << "Para elegir, introduce el número de la opción deseada." << endl;
    cout << "Durante el transcurso del juego, recolectarás ciertos items." << endl;
    cout << "Cuando esto suceda, se desplegará en pantalla el nombre y la descripcion de este." << endl << endl;
    cout <<"----------------------------------" << endl;
    cout << "Para que te vayas familiarizando con el juego, aquí se presentan los personajes: " << endl << endl;
    cout << "Personaje principal: " << endl << endl;
    Alejandra.imprimeP();
    cout << endl;
    for(int i = 0; i < monigotesS.size();i++){
        monigotesS[i].mostrarInfo();
        cout << endl;
    }
    cout << "----------------------------------" << endl;
    char gg;
    cout << "Oprime cualquier tecla para jugar" << endl;
    cin >> gg;
    


    // DECLARACIÓN MEME
    int MemeCount = 0;
    //DESCRIPCION ESCENARIO 1
    cout << "" << endl;
    cout << "Te despiertas en tu cama. Escuchas a tus papás platicando en la sala, aparentemente preocupados y desolados" << endl;
    cout << "Bajas para ver qué está pasando. Al llegar, te das cuenta que ambos tienen lágrimas en sus ojos." << endl;
    cout << "Intentas hablar con ellos. Tus papás no te hacen caso. Parece que están muy tristes y que no quieren" << endl;
    cout << "hablar contigo por lo que decides regresar a tu cuarto a dormir. Cuando estás por regresar a tu cuarto," << endl;
    cout << "escuchas que tus papás se quejan de como un hospital tan prestigioso y una doctora tan prestigiosa" << endl;
    cout << "pudieron haber fallado de esa manera. Te sacas de onda porque recuerdas que en ese hospital trabaja tu novio" << endl;
    cout << "como cardiólogo. Tus papás se van a trabajar. ¿Qué haces?" << endl<< endl;
    //OPCIONES ESCENARIO 1
    cout << "1. Te subes a dormir" << endl;
    cout <<"2. Te da hambre y decides desayunar unos fabulosos Choco Krispis con mucha leche" << endl;
    cout << "3. Te diriges al hospital para investigar y aprovechas para ver a tu novio" << endl << endl;
    int opcion1 = 0;
    while(opcion1 != 1 && opcion1 != 2 && opcion1 !=3){
        cin >> opcion1;
            try{
            opcion1 = excepcion(opcion1);
                if(opcion1 != 1 && opcion1 != 2 && opcion1 !=3){
                    break;
                }

        }
        catch(const char* msg){
            cerr << msg << endl << "Solo puedes contestar 1,2 o 3" << endl;
            cout << "1. Te subes a dormir" << endl;
            cout <<"2. Te da hambre y decides desayunar unos fabulosos Choco Krispis con mucha leche" << endl;
            cout << "3. Te diriges al hospital para investigar y aprovechas para ver a tu novio" << endl << endl;
        }
    switch(opcion1){
        case 1:
        cout  << "" << endl;
        cout << "Te quedaste dormida y no supiste nada más del tema." << endl;
        cout << "Fin del juego" << endl;
        exit(1);
        case 2:
        MemeCount = MemeCount + 1;
        cout  << "" << endl;
        cout << "Te sirves tus apetitosos Choco Krispis, ahora más chocolatosos." << endl;
        cout << "Como tú también quieres ser fantástica, agarras una botella de fanta y te la tomas, ya que recuerdas que tu novio decía que si tomabas alcohol" << endl;
        cout << "te hacías alcohólico, pero que si tomabas fanta..." << endl;
        cout << "TE HACÍAS FANTÁSTICO." << endl;
        cout << "Al acordarte de tu novio, decides ir a visitarlo y pospones tu desayuno. Al fin y al cabo, Choco Krispis con Fanta no es la mejor combinación." << endl;
        cout << "" << endl;
        cout << "Llegas al hospital. Es un edificio muy alto y moderno, con muchas ventanas." <<endl;
        cout << "Decides entrar. En la recepción, encuentras a una señorita. Intentas hablar con ella pero no te hace caso." << endl;
        cout << "Tu novio probablemente se encuentre en la sala de cardiología." << endl;
        cout << "Hace mucho que no visitabas el hospital por lo que te cuesta recordar el camino para ir a la sala de cardiología." <<endl;
        cout << "Recorres el hospital, caminas bastante pero finalmente llegas a dicha sala." << endl;
        cout << "¿Qué haces?" << endl << endl;

        //
        break;

        case 3:
        cout << "" << endl;
        cout << "Llegas al hospital. Es un edificio muy alto y moderno, con muchas ventanas."<<endl;
        cout << "Decides entrar. En la recepción, encuentras a una señorita. Intentas hablar con ella pero no te hace caso." << endl;
        cout << "Tu novio probablemente se encuentre en la sala de cardiología." << endl;
        cout << "Hace mucho que no visitabas el hospital por lo que te cuesta recordar el camino para ir a la sala de cardiología." <<endl;
        cout << "Recorres el hospital, caminas bastante pero finalmente llegas a dicha sala." << endl;
        cout << "¿Qué haces?" << endl << endl;
        //
        break;
        }
    }

    //OPCIONES ESCENARIO 2
    bool morrito = false;
    cout << "" << endl;
    cout << "1. Ves a un niño solo y asustado. Decides ir a hablar con él." << endl;
    cout << "2. En la mesita de la sala de espera ves una revista que habla de la nueva película de Shrek y te pones a leerla." << endl;
    cout << "3. Decides revisar las batas para ver si está la de tu novio o si está en alguna operación." << endl << endl;
    int opcion2 = 0;
    while(opcion2 != 1 && opcion2 != 2 && opcion2 !=3){
        cin >> opcion2;
            try{
            opcion2 = excepcion(opcion2);
                if(opcion2 != 1 && opcion2 != 2 && opcion2 !=3){
                    break;
                }
        }
        catch(const char* msg){
            cerr << msg << endl << "Solo puedes contestar 1,2 o 3" << endl;
            cout << "1. Ves a un niño solo y asustado. Decides ir a hablar con él." << endl;
            cout << "2. En la mesita de la sala de espera ves una revista que habla de la nueva película de Shrek y te pones a leerla." << endl;
            cout << "3. Decides revisar las batas para ver si está la de tu novio o si está en alguna operación." << endl << endl;
        }
    switch(opcion2){
        case 1:
        morrito = true;
        cout  << "" << endl;
        cout << "El niño te cuenta que está esperando a su mamá que últimamente ha estado sufriendo de dolores de pecho," << endl;
        cout << "y que por eso está en el consultorio del Dr. Dorn, el cual es tu novio. Le aseguras al niño que todo saldrá bien." << endl;
        cout << "El niño ya se ve menos asustado y decides irte. Mientras te alejas, el niño te vuelve a hablar" << endl;
        cout << "y te dice que te pareces mucho a alguien que salió en la televisión esa mañana. Te parece peculiar." << endl;
        cout << "Te diriges a revisar las batas para verificar que tu novio no esté ocupado." << endl << endl;
        //
        break;

        case 2:
        MemeCount = MemeCount + 1;
        cout  << "" << endl;
        cout << "Te diriges con gran emoción a la mesita. En la portada, ves una foto de Shrek en traje de baño y te sonrojas." << endl;
        cout << "Es realmente bellísimo. La revista capta tu atención de tal manera que decides sentarte y leerla con calma." << endl;
        cout << "Terminas de leer la revista. El tiempo ha pasado rápidamente." << endl;
        cout << "Han transcurrido varias horas, pero estas altamente satisfecha con semejante lectura de calidad." << endl <<endl;
        cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿"<< endl;
        cout << "⣿⠟⠫⢻⣿⣿⣿⣿⢟⣩⡍⣙⠛⢛⣿⣿⣿⠛⠛⠛⠛⠻⣿⣿⣿⣿⣿⡿⢿⣿"<< endl;
        cout << "⣿⠤⠄⠄⠙⢿⣿⣿⣿⡿⠿⠛⠛⢛⣧⣿⠇⠄⠂⠄⠄⠄⠘⣿⣿⣿⣿⠁⠄⢻"<< endl;
        cout << "⣿⣿⣿⣿⣶⣄⣾⣿⢟⣼⠒⢲⡔⣺⣿⣧⠄⠄⣠⠤⢤⡀⠄⠟⠉⣠⣤⣤⣤⣾"<< endl;
        cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⣀⣬⣵⣿⣿⣿⣶⡤⠙⠄⠘⠃⠄⣴⣾⣿⣿⣿⣿⣿"<< endl;
        cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢻⠿⢿⣿⣿⠿⠋⠁⠄⠂⠉⠒⢘⣿⣿⣿⣿⣿⣿⣿"<< endl;
        cout << "⣿⣿⣿⣿⣿⣿⣿⣿⡿⣡⣷⣶⣤⣤⣀⡀⠄⠄⠄⠄⠄⠄⠄⣾⣿⣿⣿⣿⣿⣿"<< endl;
        cout << "⣿⣿⣿⣿⣿⣿⣿⡿⣸⣿⣿⣿⣿⣿⣿⣿⣷⣦⣰⠄⠄⠄⠄⢾⠿⢿⣿⣿⣿⣿"<< endl;
        cout << "⣿⡿⠋⣡⣾⣿⣿⣿⡟⠉⠉⠈⠉⠉⠉⠉⠉⠄⠄⠄⠑⠄⠄⠐⡇⠄⠈⠙⠛⠋"<< endl;
        cout << "⠋⠄⣾⣿⣿⣿⣿⡿⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢠⡇⠄⠄⠄⠄⠄"<< endl;
        cout << "⠄⢸⣿⣿⣿⣿⣿⣯⠄⢠⡀⠄⠄⠄⠄⠄⠄⠄⠄⣀⠄⠄⠄⠄⠁⠄⠄⠄⠄⠄"<< endl;
        cout << "⠁⢸⣿⣿⣿⣿⣿⣯⣧⣬⣿⣤⣐⣂⣄⣀⣠⡴⠖⠈⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄"<< endl;
        cout << "⠈⠈⣿⣟⣿⣿⣿⣿⣿⣿⣿⣿⣽⣉⡉⠉⠈⠁⠄⠁⠄⠄⠄⠄⡂⠄⠄⠄⠄⠄"<< endl;
        cout << "⠄⠄⠙⣿⣿⠿⣿⣿⣿⣿⣷⡤⠈⠉⠉⠁⠄⠄⠄⠄⠄⠄⠄⠠⠔⠄⠄⠄⠄⠄"<< endl;
        cout << "⠄⠄⠄⡈⢿⣷⣿⣿⢿⣿⣿⣷⡦⢤⡀⠄⠄⠄⠄⠄⠄⢐⣠⡿⠁⠄⠄⠄⠄⠄"<< endl<<endl;
        cout << "Después de esta lectura, recuerdas lo que estabas haciendo, por lo que te diriges a revisar las "<< endl;
        cout << "batas para ver si está la de tu novio o si está en alguna operación."<< endl<<endl;
        //
        break;

        case 3:
        cout << "" << endl;
        //
        break;
        }
    }

    cout << "Al llegar a donde están todas las batas, buscas la de tu novio, el famoso Dr. Dorn." << endl;
    cout << "Te das cuenta que no está su bata, por lo que sabes que está ocupado en alguna operación o consulta." << endl;
    cout << "Ves que arriba de cada bata está la foto del doctor al que pertenece." << endl;
    cout << "Observas que al lado de la foto de tu novio está la foto de una joven muy guapa." << endl;
    cout << "Decides leer su nombre. Aparentemente es la famosa Dra. Carmelita Fiji, tu novio te ha contado de ella." << endl;
    cout << "Es una doctora con un currículum impecable, y con un doctorado en cardiología. Su bata huele muy bien," << endl;
    cout << "por lo que decides tomarla para olerla. Cuando la tomas te llega un flashback." << endl << endl;
    items.push_back(Item("Bata Dra.Fiji",descripciones[4]));
    Alejandra.setItem(items[items.size()-1]);
    Alejandra.setHabitacion(rooms[1]);
    cout << "Has recolectado un objeto y este se ha añadido a tu inventario." << endl << endl;
    cout << items[items.size()-1];
    Alejandra.mostrarInfo();
    cout << "-------------Recordando------------" << endl << endl;
    cout << "Recuerdas que la conoces. Te empiezan a llegar recuerdos. Estás sentada en la cama de lo que parece ser un cuarto de hospital," << endl;
    cout << "tus papás están ahí. Los notas preocupados. Te dicen que pronto entrará la doctora que te operará de tu problema en el corazón" << endl;
    cout << "y que no tienes nada de que preocuparte, puesto que esta gran doctora tiene un currículum impecable y una reputación prestigiosa." << endl << endl;
    cout << "Regresas al presente. Te resulta peculiar, ya que no recuerdas haber tenido un problema en el corazón. Tu instinto te dice que agarres la bata." << endl;
    cout << "¿Qué haces?" << endl << endl;


    // OPCIONES ESCENARIO 3
    cout << "" << endl;
    cout << "1. Decides ir al consultorio de la doctora Fiji para saber más al respecto." << endl;
    cout << "2. En la televisión comienza a salir el programa de los Backyardigans y te llega una sensación que nunca antes habías experimentado. Te quedas a verlo." << endl;
    cout << "3. Decides volver a tu casa" << endl << endl;
    int opcion3 = 0;
    while(opcion3 != 1 && opcion3 != 2 && opcion3 !=3){
        cin >> opcion3;
            try{
            opcion3 = excepcion(opcion3);
                if(opcion3 != 1 && opcion3 != 2 && opcion3 !=3){
                    break;
                }

        }
        catch(const char* msg){
            cerr << msg << endl << "Solo puedes contestar 1,2 o 3" << endl;
            cout << "1. Decides ir al consultorio de la doctora Fiji para saber más al respecto." << endl;
            cout << "2. En la televisión comienza a salir el programa de los Backyardigans y te llega una sensación que nunca antes habías experimentado. Te quedas a verlo." << endl;
            cout << "3. Decides volver a tu casa" << endl << endl;
        }
    switch(opcion3){
        case 1:
        cout  << "" << endl;
        //
        break;

        case 2:
        MemeCount = MemeCount + 1;
        cout  << "" << endl;
        cout << "El flashback fue intenso y te sientes un poco ansiosa. Pero de pronto escuhas un ruido casi angelical. " << endl;
        cout << "Es la intro de un programa de televisión. Un programa llamado Backyardigans." << endl;
        cout << "Te inunda una sensación de paz y una sensación extraña, pero placentera." << endl;
        cout << "Te quedas a ver el programa ya que quieres prolongar esta sensación." << endl;
        cout << "Tienes una corazonada de que este sería el sentimiento que experimentarías al llegar al paraíso." << endl <<endl;
        cout << "Regresas a la realidad. Decides ir a revisar el consultorio de la doctora Fiji." << endl << endl;
        //
        break;

        case 3:
        cout << "" << endl;
        cout << "Abandonaste tu investigación." << endl;
        cout << "Fin del juego" << endl << endl;
        exit(1);
        //
        break;
        }
    }

    cout << "Al llegar al consultorio, te das cuenta que se necesita una credencial para acceder. Sientes algo en la bata." << endl;
    cout << "¿Inspeccionas la bata?  (S/N)" << endl << endl;
    char respuesta;
    cin >> respuesta;
    while (respuesta != 'S' && respuesta !='s'){
      if(respuesta == 'N' || respuesta =='n'){
        cout << "No sabes como entrar." << endl;
        cout << "¿Inspeccionas la bata?  (S/N)" << endl << endl;
        cin >> respuesta;
      }
      else{
        cout << "Las respuestas válidas solo son S/N" << endl;
        cin >> respuesta;
        }
      }
    cout << "" << endl;
    cout << "Te das cuenta que en el bolsillo está la credencial de la doctora Fiji. La pasas por el lector y la" << endl;
    cout << "puerta se abre. La pared de su consultorio está repleto de artículos enmarcados de diferentes" << endl;
    cout << "logros de la doctora así como de sus diplomas. Notas que en la mesa tiene algunos expedientes con fotos." << endl;
    cout << "¿Qué haces?" << endl << endl;

    // OPCIONES ESCENARIO 4
    cout << "" << endl;
    cout << "1. Revisas expediente 1." << endl;
    cout << "2. Revisas expediente 2." << endl;
    cout << "3. Revisas libreta con apuntes." << endl << endl;
    int opcion4 = 0;
    while(opcion4 != 1 && opcion4 != 2 && opcion4 !=3){
        cin >> opcion4;
            try{
            opcion4 = excepcion(opcion4);
                if(opcion4 != 1 && opcion4 != 2 && opcion4 !=3){
                    break;
                }

        }
        catch(const char* msg){
            cerr << msg << endl << "Solo puedes contestar 1,2 o 3" << endl;
            cout << "1. Revisas expediente 1." << endl;
            cout << "2. Revisas expediente 2." << endl;
            cout << "3. Revisas libreta con apuntes." << endl << endl;
        }
    }
    switch(opcion4){
        case 1:{
        cout  << "" << endl;
        cout  << "Al acercarte a este expediente, notas algo familiar en él. Lo abres, ves una foto tuya en la esquina superior derecha" << endl;
        cout  << "y tu firma hasta abajo, dando tu consentimiento. Al recorrer la información contenida en el expediente, te enteras " << endl;
        cout  << "de que padecías de un prolapso de la válvula mitral (un padecimiento del corazón) y que necesitabas con urgencia " << endl;
        cout  << "una intervención quirúrgica. Sin embargo, ves que la tasa de mortalidad de esa operación es de 10.6% por lo que te tranquilizas. " << endl;
        cout  << "Al parecer te iban a operar en el quirófano número 3. Tomas tu expediente y te llega una sensación de que debes dirigirte al quirófano." << endl <<endl <<endl;
        items.push_back(Item("Expediente de Alejandra Veru",descripciones[5]));
        Alejandra.setItem(items[items.size()-1]);
        Alejandra.setHabitacion(rooms[2]);
        cout << "Has recolectado un objeto y este se ha añadido a tu inventario." << endl << endl;
        cout << items[items.size()-1];
        Alejandra.mostrarInfo();
        cout << endl;
        
        cout << "¿Qué haces?" << endl;
        cout << "1. Revisas expediente 2." << endl;
        cout << "2. Revisas libreta con apuntes." << endl << endl;
        int o = 0;
        while(o != 1 && o != 2){
        cin >> o;
            try{
            o = excepcion1(o);
                if(o != 1 && o != 2){
                    break;
                }

            }
            catch(const char* msg){
                cerr << msg << endl << "Solo puedes contestar 1 o 2" << endl;
                cout << "1. Revisas expediente 2." << endl;
                cout << "2. Revisas libreta con apuntes." << endl << endl;
             }
        }
        switch(o){
            case 1:{
            MemeCount = MemeCount + 1;
            cout  << "" << endl;
            cout << "Abres el expediente e inmediatamente este llama tu atención. Tú esperabas ver imágenes de una anatomía humana, " << endl;
            cout << "pero esto no se parece en nada a un cuerpo humano. Lo inspeccionas y al verlo de manera más detallada ves que parece un sistema automotriz." << endl;
            cout << "Lees la información del paciente. El nombre - “Rayo McQueen”-. " << endl;
            cout << "La enfermedad - “Disfunción del mofle”-. Has visto suficiente y decides dejar de revisar el expediente." << endl << endl;

            cout << "¿Que haces?" << endl;
            cout << "1. Revisas libreta con apuntes." << endl << endl;
            int op = 0;
             while(op != 1){
                cin >> op;
                try{
                op = excepcion2(op);
                    if(op != 1 && op != 2){
                        break;
                    }

                 }
                catch(const char* msg){
                    cerr << msg << endl << "Solo puedes contestar 1" << endl;
                    cout << "1. Revisas libreta con apuntes." << endl << endl;
             }
             }
              
                cout << "Te das cuenta que en la mesa de la doctora hay una libreta. Comienzas a leerlo y notas que es un diario." << endl;
                cout << "Te da curiosidad por lo que decides hojearlo. Ves en una página muchos corazones y en medio de ellos, el nombre de tu novio. " << endl;
                cout << "Sientes los celos recorriendo tu cuerpo. " << endl << endl;
                break;
            }

                case 2:{
                cout << "Te das cuenta que en la mesa de la doctora hay una libreta. Comienzas a leerlo y notas que es un diario." << endl;
                cout << "Te da curiosidad por lo que decides hojearlo. Ves en una página muchos corazones y en medio de ellos, el nombre de tu novio. " << endl;
                cout << "Sientes los celos recorriendo tu cuerpo. " << endl << endl;
                cout << "¿Que haces?" << endl;
                cout << "1. Revisas expediente 2." << endl << endl;
                int opc = 0;
                while(opc != 1){
                    cin >> opc;
                    try{
                    opc = excepcion2(opc);
                        if(opc != 1){
                            break;
                     }

                     }
                    catch(const char* msg){
                        cerr << msg << endl << "Solo puedes contestar 1" << endl;
                        cout << "1. Revisas expediente 2." << endl << endl;
                 }
                }
                MemeCount = MemeCount + 1;
                cout  << "" << endl;
                cout << "Abres el expediente e inmediatamente este llama tu atención. Tú esperabas ver imágenes de una anatomía humana, " << endl;
                cout << "pero esto no se parece en nada a un cuerpo humano. Lo inspeccionas y al verlo de manera más detallada ves que parece un sistema automotriz." << endl;
                cout << " Lees la información del paciente. El nombre - “Rayo McQueen”-. " << endl;
                cout << "La enfermedad - “Disfunción del mofle”-. Has visto suficiente y decides dejar de revisar el expediente." << endl << endl;
                break;
                }
        }
        //
        break;
        }

        case 2:{
        MemeCount = MemeCount + 1;
        cout  << "" << endl;
        cout << "Abres el expediente e inmediatamente este llama tu atención. Tú esperabas ver imágenes de una anatomía humana, " << endl;
        cout << "pero esto no se parece en nada a un cuerpo humano. Lo inspeccionas y al verlo de manera más detallada ves que parece un sistema automotriz." << endl;
        cout << " Lees la información del paciente. El nombre - “Rayo McQueen”-. " << endl;
        cout << "La enfermedad - “Disfunción del mofle”-. Has visto suficiente y decides dejar de revisar el expediente." << endl << endl;
        cout << "¿Qué haces" << endl;
        cout << "1. Revisas expediente 1." << endl;
        cout << "2. Revisas libreta con apuntes." << endl << endl;
        int o = 0;
        while(o != 1 && o != 2){
        cin >> o;
            try{
            o = excepcion1(o);
                if(o != 1 && o != 2){
                    break;
                }

            }
            catch(const char* msg){
                cerr << msg << endl << "Solo puedes contestar 1 o 2" << endl;
                cout << "1. Revisas expediente 1." << endl;
                cout << "2. Revisas libreta con apuntes." << endl << endl;
             }
        }
        switch(o){
            case 1:{
            cout  << "" << endl;
            cout  << "Al acercarte a este expediente, notas algo familiar en él. Lo abres, ves una foto tuya en la esquina superior derecha" << endl;
            cout  << "y tu firma hasta abajo, dando tu consentimiento. Al recorrer la información contenida en el expediente, te enteras " << endl;
            cout  << "de que padecías de un prolapso de la válvula mitral (un padecimiento del corazón) y que necesitabas con urgencia " << endl;
            cout  << "una intervención quirúrgica. Sin embargo, ves que la tasa de mortalidad de esa operación es de 10.6% por lo que te tranquilizas. " << endl;
            cout  << "Al parecer te iban a operar en el quirófano número 3. Tomas tu expediente y te llega una sensación de que debes dirigirte al quirófano." << endl <<endl <<endl;
            items.push_back(Item("Expediente de Alejandra Veru",descripciones[5]));
            Alejandra.setItem(items[items.size()-1]);
            Alejandra.setHabitacion(rooms[2]);
            cout << "Has recolectado un objeto y este se ha añadido a tu inventario." << endl << endl;
            cout << items[items.size()-1];
            Alejandra.mostrarInfo();

            cout << "¿Que haces?" << endl;
            cout << "1. Revisas libreta con apuntes." << endl << endl;
            int op;
             while(op != 1){
                cin >> op;
                try{
                op = excepcion2(op);
                    if(op != 1 && op != 2){
                        break;
                    }

                 }
                catch(const char* msg){
                    cerr << msg << endl << "Solo puedes contestar 1" << endl;
                    cout << "1. Revisas libreta con apuntes." << endl << endl;
             }
             }
              
                cout << "Te das cuenta que en la mesa de la doctora hay una libreta. Comienzas a leerlo y notas que es un diario." << endl;
                cout << "Te da curiosidad por lo que decides hojearlo. Ves en una página muchos corazones y en medio de ellos, el nombre de tu novio. " << endl;
                cout << "Sientes los celos recorriendo tu cuerpo. " << endl << endl;
                break;
            }

                case 2:{
                cout << "Te das cuenta que en la mesa de la doctora hay una libreta. Comienzas a leerlo y notas que es un diario." << endl;
                cout << "Te da curiosidad por lo que decides hojearlo. Ves en una página muchos corazones y en medio de ellos, el nombre de tu novio. " << endl;
                cout << "Sientes los celos recorriendo tu cuerpo. " << endl << endl;
                cout << "¿Que haces?" << endl;
                cout << "1. Revisas expediente 1." << endl << endl;
                int opc = 0;
                while(opc != 1){
                    cin >> opc;
                    try{
                    opc = excepcion2(opc);
                        if(opc != 1){
                            break;
                     }

                     }
                    catch(const char* msg){
                        cerr << msg << endl << "Solo puedes contestar 1" << endl;
                        cout << "1. Revisas expediente 1." << endl << endl;
                 }
                }
                cout  << "" << endl;
                cout  << "Al acercarte a este expediente, notas algo familiar en él. Lo abres, ves una foto tuya en la esquina superior derecha" << endl;
                cout  << "y tu firma hasta abajo, dando tu consentimiento. Al recorrer la información contenida en el expediente, te enteras " << endl;
                cout  << "de que padecías de un prolapso de la válvula mitral (un padecimiento del corazón) y que necesitabas con urgencia " << endl;
                cout  << "una intervención quirúrgica. Sin embargo, ves que la tasa de mortalidad de esa operación es de 10.6% por lo que te tranquilizas. " << endl;
                cout  << "Al parecer te iban a operar en el quirófano número 3. Tomas tu expediente y te llega una sensación de que debes dirigirte al quirófano." << endl <<endl <<endl;
                items.push_back(Item("Expediente de Alejandra Veru",descripciones[5]));
                Alejandra.setItem(items[items.size()-1]);
                Alejandra.setHabitacion(rooms[2]);
                cout << "Has recolectado un objeto y este se ha añadido a tu inventario." << endl << endl;
                cout << items[items.size()-1];
                Alejandra.mostrarInfo();
                break;
                }
        }
        //
        break;
        }
        break;

        case 3:{
        cout << "" << endl;
        cout << "Te das cuenta que en la mesa de la doctora hay una libreta. Comienzas a leerlo y notas que es un diario." << endl;
        cout << "Te da curiosidad por lo que decides hojearlo. Ves en una página muchos corazones y en medio de ellos, el nombre de tu novio. " << endl;
        cout << "Sientes los celos recorriendo tu cuerpo. " << endl << endl;
        cout << "¿Qué haces" << endl;
        cout << "1. Revisas expediente 1." << endl;
        cout << "2. Revisas expediente 2." << endl << endl;
        int o = 0;
        while(o != 1 && o != 2){
        cin >> o;
            try{
            o = excepcion1(o);
                if(o != 1 && o != 2){
                    break;
                }

            }
            catch(const char* msg){
                cerr << msg << endl << "Solo puedes contestar 1 o 2" << endl;
                cout << "1. Revisas expediente 1." << endl;
                cout << "2. Revisas expediente 2." << endl << endl;
             }
        }
        switch(o){
            case 1:{
            cout  << "" << endl;
            cout  << "Al acercarte a este expediente, notas algo familiar en él. Lo abres, ves una foto tuya en la esquina superior derecha" << endl;
            cout  << "y tu firma hasta abajo, dando tu consentimiento. Al recorrer la información contenida en el expediente, te enteras " << endl;
            cout  << "de que padecías de un prolapso de la válvula mitral (un padecimiento del corazón) y que necesitabas con urgencia " << endl;
            cout  << "una intervención quirúrgica. Sin embargo, ves que la tasa de mortalidad de esa operación es de 10.6% por lo que te tranquilizas. " << endl;
            cout  << "Al parecer te iban a operar en el quirófano número 3. Tomas tu expediente y te llega una sensación de que debes dirigirte al quirófano." << endl <<endl <<endl;
            items.push_back(Item("Expediente de Alejandra Veru",descripciones[5]));
            Alejandra.setItem(items[items.size()-1]);
            Alejandra.setHabitacion(rooms[2]);
            cout << "Has recolectado un objeto y este se ha añadido a tu inventario." << endl << endl;
            cout << items[items.size()-1];
            Alejandra.mostrarInfo();

            cout << "¿Que haces?" << endl;
            cout << "1. Revisas expediente 2." << endl << endl;
            int op;
             while(op != 1){
                cin >> op;
                try{
                op = excepcion2(op);
                    if(op != 1 && op != 2){
                        break;
                    }

                 }
                catch(const char* msg){
                    cerr << msg << endl << "Solo puedes contestar 1" << endl;
                    cout << "1. Revisas expediente 2." << endl << endl;
             }
             }
              
            MemeCount = MemeCount + 1;
            cout  << "" << endl;
            cout << "Abres el expediente e inmediatamente este llama tu atención. Tú esperabas ver imágenes de una anatomía humana, " << endl;
            cout << "pero esto no se parece en nada a un cuerpo humano. Lo inspeccionas y al verlo de manera más detallada ves que parece un sistema automotriz." << endl;
            cout << " Lees la información del paciente. El nombre - “Rayo McQueen”-. " << endl;
            cout << "La enfermedad - “Disfunción del mofle”-. Has visto suficiente y decides dejar de revisar el expediente." << endl << endl;
                break;
            }

                case 2:{
                MemeCount = MemeCount + 1;
                cout  << "" << endl;
                cout << "Abres el expediente e inmediatamente este llama tu atención. Tú esperabas ver imágenes de una anatomía humana, " << endl;
                cout << "pero esto no se parece en nada a un cuerpo humano. Lo inspeccionas y al verlo de manera más detallada ves que parece un sistema automotriz." << endl;
                cout << " Lees la información del paciente. El nombre - “Rayo McQueen”-. " << endl;
                cout << "La enfermedad - “Disfunción del mofle”-. Has visto suficiente y decides dejar de revisar el expediente." << endl << endl;
                cout << "1. Revisas expediente 1." << endl << endl;
                int opc = 0;
                while(opc != 1){
                    cin >> opc;
                    try{
                    opc = excepcion2(opc);
                        if(opc != 1){
                            break;
                     }

                     }
                    catch(const char* msg){
                        cerr << msg << endl << "Solo puedes contestar 1" << endl;
                        cout << "1. Revisas expediente 1." << endl << endl;
                 }
                }
                cout  << "" << endl;
                cout  << "Al acercarte a este expediente, notas algo familiar en él. Lo abres, ves una foto tuya en la esquina superior derecha" << endl;
                cout  << "y tu firma hasta abajo, dando tu consentimiento. Al recorrer la información contenida en el expediente, te enteras " << endl;
                cout  << "de que padecías de un prolapso de la válvula mitral (un padecimiento del corazón) y que necesitabas con urgencia " << endl;
                cout  << "una intervención quirúrgica. Sin embargo, ves que la tasa de mortalidad de esa operación es de 10.6% por lo que te tranquilizas. " << endl;
                cout  << "Al parecer te iban a operar en el quirófano número 3. Tomas tu expediente y te llega una sensación de que debes dirigirte al quirófano." << endl <<endl <<endl;
                items.push_back(Item("Expediente de Alejandra Veru",descripciones[5]));
                Alejandra.setItem(items[items.size()-1]);
                Alejandra.setHabitacion(rooms[2]);
                cout << "Has recolectado un objeto y este se ha añadido a tu inventario." << endl << endl;
                cout << items[items.size()-1];
                Alejandra.mostrarInfo();
                break;
                }
        }
        //
        break;
        }
        //
        break;
        }

    cout <<endl << "¿Qué haces?" << endl << endl;

    // OPCIONES ESCENARIO 5
    cout << "" << endl;
    cout << "1. Te diriges al quirófano." << endl;
    cout << "2. Te asustas y decides irte a casa." << endl;
    cout << "3. Dibujas un diagrama UML en los apuntes de la doctora como te enseño Fabiola." << endl << endl;
    int opcion5 = 0;
    while(opcion5 != 1 && opcion5 != 2 && opcion5 !=3){
        cin >> opcion5;
            try{
            opcion5 = excepcion(opcion5);
                if(opcion5 != 1 && opcion5 != 2 && opcion5 !=3){
                    break;
                }

        }
        catch(const char* msg){
            cerr << msg << endl << "Solo puedes contestar 1,2 o 3" << endl;
            cout << "1. Te diriges al quirófano." << endl;
            cout << "2. Te asustas y decides irte a casa." << endl;
            cout << "3. Dibujas un diagrama UML en los apuntes de la doctora como te enseño Fabiola." << endl << endl;
        }
    switch(opcion5){
        case 1:
        cout  << "" << endl;
        cout  << "Sales del consultorio con una sensación extraña en el pecho. Tienes el presentimiento de que hay algo raro en todo esto." << endl;
        cout  << "Tus papás estaban llorando porque algo había pasado en el hospital y se supone que te operaron pero tú no lo recuerdas… " << endl;
        cout  << "Haces a un lado estos pensamientos. No es momento, tienes que seguir con tu investigación. " << endl;
        cout  << "Llegas a los quirófanos y entras al número 3. " << endl << endl;
        //
        break;

        case 2:
        cout  << "" << endl;
        cout << "Abandonaste tu investigación y no supiste nada más." << endl;
        cout << "Fin del juego" << endl << endl;
        exit(1);
        //
        break;

        case 3:
        MemeCount = MemeCount + 1;
        cout << "" << endl;
        cout << "Al ver las notas de la doctora en su mesa, sientes el impulso de dibujar un bellísimo diagrama UML. Te acuerdas que tomaste" << endl;
        cout << "la unidad de formación TC1033 con tu maestra favorita, la poderosa, la magnífica y la inigualable profesora " << endl;
        cout << "Fabiola Uribe Plata por lo que posees unas habilidades sobrenaturales para llevar a cabo este diagrama. " << endl;
        cout << "Una vez que estás satisfecha con el resultado, decides ir al quirófano. Sales del consultorio alegremente " << endl;
        cout << "y con la mente despejada. Llegas a los quirófanos y entras al número 3. " << endl << endl;
        //
        break;
        }
    }

    cout << "¿Qué haces?" << endl << endl;

    // OPCIONES ESCENARIO 6
    cout << "" << endl;
    cout << "1. Investigas el quirófano." << endl;
    cout << "2. Ves sangre en el piso, te asqueas y decides irte a casa." << endl;
    cout << "3. Ves una cucaracha en el piso y quieres matarla." << endl << endl;
    int opcion6 = 0;
    while(opcion6 != 1 && opcion6 != 2 && opcion6 !=3){
        cin >> opcion6;
            try{
            opcion6 = excepcion(opcion6);
                if(opcion6 != 1 && opcion6 != 2 && opcion6 !=3){
                    break;
                }

        }
        catch(const char* msg){
            cerr << msg << endl << "Solo puedes contestar 1,2 o 3" << endl;
            cout << "1. Investigas el quirófano." << endl;
            cout << "2. Ves sangre en el piso, te asqueas y decides irte a casa." << endl;
            cout << "3. Ves una cucaracha en el piso y quieres matarla." << endl << endl;
        }
    switch(opcion6){
        case 1:
        cout  << "" << endl;
        cout  << "Al entrar al quirófano ves una sala amplia, muy bien iluminada, con una mesa de metal en medio, muchos aparatos raros repartidos" << endl;
        cout  << "a lo largo de la sala y algunos cajones y repisas. Notas que la mesa de metal tiene gotas de sangre y que en el piso hay guantes ensangrentados." << endl;
        cout  << "Pareciera que acaba de haber una operación y no han limpiado el quirófano. De repente algo llama tu atención, volteas a un lado" << endl;
        cout  << "y notas que hay algo en un bote de basura reflejando la luz. Parece un bisturí. Lo investigas…. lo tomas, lo envuelves en papel y lo metes" << endl;
        cout  << "en un bolsillo de la bata. Sales del quirófano y ves que el doctor que acababa de operar era la doctora Carmelita. " << endl << endl;
        cout << "Has recolectado un objeto y este se ha añadido a tu inventario." << endl;
        items.push_back(Item("Bisturí",descripciones[6]));
        cout << items[items.size()-1];
        Alejandra.setItem(items[items.size()-1]);
        Alejandra.setHabitacion(rooms[3]);
        cout << "Has recolectado un objeto y este se ha añadido a tu inventario." << endl << endl;
        cout << items[items.size()-1];
        Alejandra.mostrarInfo();
        cout << endl;
        //
        break;

        case 2:
        cout  << "" << endl;
        cout << "Te asqueaste y decidiste mejor no seguir tu investigación." << endl;
        cout << "Fin del juego" << endl << endl;
        exit(1);
        //
        break;

        case 3:
        MemeCount = MemeCount + 1;
        cout << "" << endl;
        cout << "Al entrar al quirófano ves una sala amplia, muy bien iluminada, con una mesa de metal en medio, muchos aparatos raros repartidos" << endl;
        cout << "a lo largo de la sala y algunos cajones y repisas. Pero algo llama tu atención, HAY UNA CUCARACHA, y tu ODIAS las cucarachas, " << endl;
        cout << "por lo que la persigues por todo el cuarto. Lamentablemente el insecto logra escabullirse y se escapa. Al verla escapar, algo llama tu atención." << endl;
        cout << "Notas que hay algo en un bote de basura reflejando la luz. Parece un bisturí. Lo investigas…. lo tomas, lo envuelves en papel y lo metes en un bolsillo de la bata." << endl;
        cout << "Sales del quirófano y ves que el doctor que acababa de operar era la doctora Carmelita." << endl << endl;
        items.push_back(Item("Bisturí",descripciones[6]));
        Alejandra.setItem(items[items.size()-1]);
        Alejandra.setHabitacion(rooms[3]);
        cout << "Has recolectado un objeto y este se ha añadido a tu inventario." << endl << endl;
        cout << items[items.size()-1];
        Alejandra.mostrarInfo();
        cout << endl;
        //
        break;
        }
    }

    cout << "¿Qué haces?" << endl << endl;

    // OPCIONES ESCENARIO 7
    cout << "" << endl;
    cout << "1. Como el quirófano está muy sucio, decides limpiarlo." << endl;
    cout << "2. Te dan ganas de dormir una siesta por lo que te regresas a tu casa" << endl;
    cout << "3. Decides volver al consultorio de la Dra.Fiji para investigar más" << endl << endl;
    int opcion7 = 0;
    while(opcion7 != 1 && opcion7 != 2 && opcion7 !=3){
        cin >> opcion7;
            try{
            opcion7 = excepcion(opcion7);
                if(opcion7 != 1 && opcion7 != 2 && opcion7 !=3){
                    break;
                }

        }
        catch(const char* msg){
            cerr << msg << endl << "Solo puedes contestar 1,2 o 3" << endl;
            cout << "1. Como el quirófano está muy sucio, decides limpiarlo." << endl;
            cout << "2. Te dan ganas de dormir una siesta por lo que te regresas a tu casa" << endl;
            cout << "3. Decides volver al consultorio de la Dra.Fiji para investigar más" << endl << endl;
        }
    switch(opcion7){
        case 1:
        MemeCount = MemeCount + 1;
        cout  << "" << endl;
        cout  << "Es increíble que doctores de este nivel dejen semejante cochinero. Empiezas por limpiar la mesa aplicando solución Mr. Músculo, " << endl;
        cout  << "después recoges los papeles y guantes tirados en el piso. Barres y después trapeas con Fabuloso. Una vez que dejaste el quirófano impecable." << endl;
        cout  << "Decides ir al consultorio de la Dra. Fiji a investigar más sobre el bisturí." << endl << endl;
        //
        break;

        case 2:
        cout  << "" << endl;
        cout << "Te regresaste a tu casa a dormir." << endl;
        cout << "Fin del juego" << endl << endl;
        exit(1);
        //
        break;

        case 3:
        cout << "" << endl;
        //
        break;
        }
    }

    cout << "De camino al consultorio, empiezas a reflexionar que está muy raro que una doctora haya intentado limpiar un bisturí con químicos" << endl;
    cout << "y que lo haya tirado en el bote de basura del quirófano ya que normalmente se desechan y ya. No hay necesidad de limpiarlo." << endl;
    cout << "Llegas al consultorio y notas que la puerta está abierta. Escuchas dos voces y una te resulta familiar." << endl;
    cout << "Entras y descubres que tu novio está ahí, llorando y gritándole a la doctora Fiji. La doctora Fiji ni se inmuta, en su mano," << endl << endl;
    cout << "sostiene la foto de un cádaver. Te quedas inmóvil, es una foto de TU cádaver." << endl << endl;
    cout << "La doctora Fiji se ríe descaradamente. Le confiesa a tu novio que ella siempre lo había amado y que no iba a descansar hasta que él fuera suyo." << endl;
    cout << "De pronto todo cobra sentido. La doctora Fiji te había asesinado con el bisturí, es por esto que tus papás lloraban" << endl;
    cout << "y no te habían hecho caso, es por esto por lo que la señorita de la entrada no te hizo caso," << endl;
    if(morrito == true){
      cout << "es por esto que el niño te había dicho que te parecías a alguien que había salido en televisión en la mañana" << endl;
    }
    cout << "estabas muerta y eras un fantasma deambulando por el hospital." << endl;

    if(MemeCount == 7){
      cout << "Tu novio, enojado se lanza sobre la doctora. Ella, en defensa, agarra su bisturí con diamantes y atraviesa el corazón del doctor Dorn." << endl;
      cout << "Lo ves caer al suelo. Sus ojos reflejan un sufrimiento indescriptible y una sola lágrima sale de ellos." << endl;
      cout << "La doctora lo mira con ojos de amor y lo besa, diciéndole que lo ama y que vea el lado bueno, que ahora se encontrará con su amada." << endl << endl;
    }
    
    cout << "Agarras la foto y la guardas en el bolsillo de la bata." << endl;
    items.push_back(Item("Foto cadaver",descripciones[7]));
    Alejandra.setItem(items[items.size()-1]);
    Alejandra.setHabitacion(rooms[2]);
    cout << "Has recolectado un objeto y este se ha añadido a tu inventario." << endl << endl;
    cout << items[items.size()-1];
    Alejandra.mostrarInfo();

    // OPCIONES ESCENARIO 8
    cout << "" << endl;
    cout << "¿Qué haces?" << endl;
    cout << "1. Aceptas tu muerte y abandonas este mundo" << endl;
    cout << "2. Te da igual y decides ponerte a asustar personas" << endl;
    cout << "3. Decides intentar exponer los actos de la Dra.Fiji" << endl << endl;
    int opcion8 = 0;
    while(opcion8 != 1 && opcion8 != 2 && opcion8 !=3){
        cin >> opcion8;
            try{
            opcion8 = excepcion(opcion8);
                if(opcion8 != 1 && opcion8 != 2 && opcion8 !=3){
                    break;
                }

        }
        catch(const char* msg){
            cerr << msg << endl << "Solo puedes contestar 1,2 o 3" << endl;
            cout << "1. Aceptas tu muerte y abandonas este mundo" << endl;
            cout << "2. Te da igual y decides ponerte a asustar personas" << endl;
            cout << "3. Decides intentar exponer los actos de la Dra.Fiji" << endl << endl;
        }
    switch(opcion8){
        case 1:
        cout  << "" << endl;
        cout << "Estás muerta y te resignas a esto, ya no tiene caso hacer nada. " << endl;
        cout << "Fin del juego" << endl << endl;
        exit(1);
        //
        break;

        case 2:
        cout  << "" << endl;
        cout << "Ahora que sabes que eres un fantasma, decides asustar gente y divertirte. " << endl;
        cout << "Fin del juego" << endl << endl;
        exit(1);
        //
        break;

        case 3:
        cout << "" << endl;
        cout << "Al ver todo esto y darte cuenta de que la doctora Fiji te asesinó, recuerdas que a lo largo de tu investigación" << endl;
        cout << "recolectaste algunos objetos, mismos que pueden ser usados para acusar a la doctora de homicida" << endl;
        cout << "y de darle su merecido. Regresas a tu casa y llevas toda esta evidencia a tus papás." << endl;
        cout << "Regresas a tu casa y llevas toda esta evidencia a tus papás. Tus papás siguen llorando en la sala." << endl;
        cout << "Como no pueden verte, solo dejas la evidencia en la mesa y esperas a que se den cuenta." << endl <<endl;
        break;
        }
    }

    cout << "--------------------------------------" << endl;
    cout << "Al poco tiempo tus papás se percatan de los objetos sobre la mesa" << endl;
    cout << "Comienzan a conectar los puntos. Primeramente la bata de la Doctora Fiji. Ella había operado a su hija" << endl;
    cout << "Habían puesto su confianza en ella. Una doctora que nunca había fallado." << endl;
    cout << "La mejor cardióloga del país." << endl;
    cout << "Luego tenían el expediente, en el cual la doctora había dejado claro que era un procedimiento de rutina." << endl;
    cout << "Que la cirugía se complicara era casi imposible. Y luego el bisturí." << endl;
    cout << "Manchado de sangre y con olor a químicos." << endl;
    cout << "Ves como todos los miembros de tu familia tienen una expresión de emociones mixtas." << endl;
    cout << "Enojo, rabia, tristeza. Finalmente, la evidencia más condenadora de todas." << endl;
    cout << "Una selfie de la doctora sonriendo maqueavélicamente  junto con tu cadáver." << endl;
    cout << "De manera presurosa tu familia se dirige al hospital y al consultorio de la doctora. " << endl;
    cout << "Tu padre derriba la puerta." << endl;
    if (MemeCount == 7){
        cout << "En el suelo se encuentra el cadáver ya rígido del Doctor Dorn." << endl;
        cout << "La Doctora Fiji no se ve por ningún lado. Notifican a las autoridades y presentan la evidencia." << endl;
        cout << "Las autoridades determinan que efectivamente, la doctora es culpable de un doble homicidio." << endl;
        cout << "Sin embargo, como perdiste demasiado tiempo haciendo otras cosas como leer la revista de Shrek,";
        cout << "la doctora Fiji tuvo tiempo de escapar del país por lo que terminas sin poder atraparla." << endl;
        cout << "Has llegado al final del camino" << endl;
    }
    else{
        cout << "La doctora Fiji se encuentra sentada en su escritorio escuchando";
        cout << "la bellísima composición de Chopin, el Nocturno Op. 9 No.2 en mi bemol mayor." << endl;
        cout << "Al ver a tu padre irrumpir en su consultorio con la foto en su mano";
        cout << ", agarra su bisturí de diamante e intenta apuñalarlo. " << endl;
        cout << "Tu padre es ágil y logra esquivar su feroz ataque." << endl;
        cout << "Acto seguido inmoviliza a la doctora y la pone contra el suelo asegurándose de que no pueda escapar." << endl;
        cout << "Tu madre llama a las autoridades." <<endl;
        cout << "Al poco tiempo, la doctora es llevada a juicio y es sentenciada a cadena perpetua." << endl;
        cout << "Lo lograste, pudiste atrapar a tu asesina y darle calma a tus padres." << endl;
        cout << "Ves la luz al final del camino." << endl;
        cout << "Tu trabajo en este mundo ha llegado a su fin." << endl;
    }
    cout << endl;
    cout << "Fin del juego." << endl;
    return 0;
}
