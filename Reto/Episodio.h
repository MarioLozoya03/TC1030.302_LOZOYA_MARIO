#ifndef Episodio_h
#define Episodio_h

#include <stdio.h>
#include <iostream>
using namespace std;

class Episodio{
    
public:
    // Metodos Constructores
    Episodio();
    Episodio(string _titulo, int _temporada,double _calificacion);

    //Metodos de acceso (sets)
    void setTitulo(string _titulo);
    void setTemporada(int _temporada);
    void setCalificacion(double _calificacion);
   
    // Metodos de acceso (get)
    string getTitulo();
    int getTemporada();
    double getCalificacion();
    
    //Otros Metodos
    string str() const;
    
private:
    string titulo;
    int temporada;
    double calificacion;
    
};

#endif /*episodio_h*/

    