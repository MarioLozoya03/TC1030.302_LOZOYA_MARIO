#include "Episodio.h"

// Metodos Constructores
Episodio::Episodio(){
    titulo="La desaparición de Will Byers";
    temporada= 1;
    calificacion= 90;
}

Episodio::Episodio(string _titulo, int _temporada,int _calificacion){
    titulo= _titulo;
    temporada= _temporada;
    calificacion= _calificacion;
}

    //Metodos de acceso (sets)
    void Episodio::setTitulo(string _titulo){}
    
    void Episodio::setTemporada(int _temporada){}
    
    void Episodio::setCalificacion(int _calificacion){}
    
    // Metodos de acceso (get)
    string Episodio::getTitulo()
    {
        return titulo;
    }   
    
    int Episodio::getTemporada()
    {
        return temporada;
    }
    
    int Episodio::getCalificacion()
    {
        return calificacion;
    }
   
    //Otros Metodos
    string Episodio::str(){
        return titulo + ',' + to_string(temporada)+ ',' + to_string(calificacion);
    }