#include "Episodio.h"

// Metodos Constructores
Episodio::Episodio(){
  titulo= "Tec 21";
  temporada= 22;
  calificacion= 0;
}

Episodio::Episodio(string _titulo, int _temporada,double _calificacion){
    titulo= _titulo;
    temporada= _temporada;
    calificacion= _calificacion;
}

    //Metodos de modificadores (sets)
    void Episodio::setTitulo(string _titulo){
      titulo = _titulo;
    }
    
    void Episodio::setTemporada(int _temporada){
      temporada = _temporada; 
    }
    
    void Episodio::setCalificacion(double _calificacion){
      calificacion = _calificacion;
    }
    
    // Metodos de acceso (gets)
    string Episodio::getTitulo()
    {
        return titulo;
    }   
    
    int Episodio::getTemporada()
    {
        return temporada;
    }
    
    double Episodio::getCalificacion()
    {
        return calificacion;
    }
   
    //Otros Metodos
    string Episodio::str() const
    {
        return titulo + ',' + to_string(temporada)+ ',' + to_string(calificacion);
    }