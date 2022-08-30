 while(getline(archivo,linea)){ //leo la primera línea
                stringstream sstr(linea); // Declaro un stringstream para poder leer los datos separados por " "
                string dato;
                vector<string> datos; //un vector para guardar cada dato del renglón
                while (getline(sstr, dato,' ')) { 
                    datos.push_back(dato); //Por cada dato del renglón lo agrego al vector
                }
                tipoEnvio = datos[0].at(0);
                if (tipoEnvio == 'p'){ // Si el tipo de envio es p es un "paquete"
                //2. Lee el resto de los datos, usa las variables que ya están definidas.
                nombreR=datos[1]; //en la posición 0 obtengo el char de tipo de vehículo
                estadoR=datos[2]; 
                ciudadR=datos[3];
                cpR=datos[4];
                nombreD=datos[5];
                estadoD=datos[6]; 
                ciudadD=datos[7];
                cpD=datos[8];
                costoEstandar = stod(datos[9]); //store double
                peso = stod(datos[10]);
                costoKg = stod(datos[11]); 
                // 3. Crea dos objetos Persona una para el remitente y otra para el destinatario
                Persona remitente(nombreR,estadoR,ciudadR,cpR);
                Persona destinatario(nombreD,estadoD,ciudadD,cpD);
                // 4. Agrega un nuevo paquete al arreglo
                listaEnvio[cantEnvios] = new Paquete(remitente,destinatario,costoEstandar,peso,costoKg);
                cantEnvios++;
                 }
                else if(tipoEnvio == 's'){ //Si no fue p, entonces es una s lo cual significa que es un "Sobre"
                 // 5. Lee el resto de los datos del renglón, guárdalos en las variables que ya están declaradas
                    nombreR=datos[1]; 
                    estadoR=datos[2]; 
                    ciudadR=datos[3];
                    cpR=datos[4];
                    nombreD=datos[5]; 
                    estadoD=datos[6]; 
                    ciudadD=datos[7];
                    cpD=datos[8];
                    costoEstandar=stod(datos[9]); //store double
                    largo = stod(datos[10]);
                    ancho = stod(datos[11]);
                    cargoAdicional= stod(datos[12]);
                    // 6. Crea dos objetos Persona uno para el remitente y otro para el destinatario
                    Persona remitente(nombreR,estadoR,ciudadR,cpR);
                    Persona destinatario(nombreD,estadoD,ciudadD,cpD);
                    // 7. Agrega un nuevo sobre al arreglo        
                    listaEnvio[cantEnvios] = new Sobre(remitente,destinatario,costoEstandar,largo,ancho,cargoAdicional); 
                    cantEnvios++;        
                }
             
            }           

    archivo.close();
    Persona rem, dest;
    double costoEnvio, totalEnvios;
    
    totalEnvios = 0; // Para ir acumulando el costo de los envíos
    for (int c = 0; c < cantEnvios; c++) {
        // 8. Obten el remitente del Envio
        rem = listaEnvio[c] -> getRemitente();
        cout << "---------- " << "Inician datos de Envio: " << c+1 << " ----------" << endl;
        cout << "REMITENTE: " << endl;
        // 9. Manda a imprimir los datos del remitente, usa el método adecuado que ya tienes definido en esa clase
        rem.imprime();
        cout << endl;