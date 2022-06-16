#include "Video.h"

// Metodos Constructores
Video::Video(){
    iD="0000";
    titulo="Tigres Perdieron";
    duracion= 105;
    genero="Tragedia-Drama";
    calificacionPromedio= 0;
}

Video::Video(string _iD, string _titulo, int _duracion,string _genero, double _calificacionPromedio){
    iD= _iD;
    titulo= _titulo;
    duracion=_duracion;
    genero=_genero;
    calificacionPromedio=_calificacionPromedio;
}

    //Metodos de modificadores (sets)
    void Video::setId(string _iD){
      iD = _iD;
    }
    
    void Video::setTitulo(string _titulo){
      titulo = _titulo;
    }
    
    void Video::setDuracion(int _duracion){
      duracion = _duracion;
    }
    
    void Video::setGenero(string _genero){
      genero = genero;
    }
    
    void Video::setCalificacion(double _calificacionPromedio){
      calificacionPromedio = _calificacionPromedio;
    }
    
    
    // Metodos de acceso (get)
    string Video::getId(){
        return iD;
    }
    string Video::getTitulo(){
        return titulo;
    }
    int Video::getDuracion(){
        return duracion;
    }
    string Video::getGenero(){
        return genero;
    }
    double Video::getCalificacion(){
        return calificacionPromedio;
    }
    
    //Otros Metodos
    string Video::str(){
        return iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio);
    }