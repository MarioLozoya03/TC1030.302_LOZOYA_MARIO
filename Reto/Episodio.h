#ifndef Episodio_h
#define Episodio_h

#include <stdio.h>
#include <iostream>
using namespace std;

class Episodio{
    
public:
    // Metodos Constructores
    Episodio();
    Episodio(string _titulo, int _temporada,int _calificacion);

    //Metodos de acceso (sets)
    void setTitulo(string _titulo);
    void setTemporada(int _temporada);
    void setCalificacion(int _calificacion);
   
    // Metodos de acceso (get)
    string getTitulo();
    int getTemporada();
    int getCalificacion();
    
    //Otros Metodos
    string str();
    
private:
    string titulo;
    int temporada;
    int calificacion;
    
};

#endif /*episodio_h*/

    