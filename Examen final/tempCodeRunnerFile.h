std::string Pais::obtenerDatos(){
    std::string datos;
    datos = Territorio::obtenerDatos() + "idioma: " +getIdioma() + "moneda: " + getMoneda();

}