#ifndef Video_h
#define Video_h

#include <stdio.h>
#include <iostream>
using namespace std;

class Video{
    
public:
    // Metodos Constructores
    Video();
    Video(string _iD, string _titulo, int _duracion,string _genero, double _calificacionPromedio);

    //Metodos de acceso (sets)
    void setId(string _iD);
    void setTitulo(string _titulo);
    void setDuracion(int _duracion);
    void setGenero(string _genero);
    void setCalificacion(double _calificacionPromedio);
    
    // Metodos de acceso (get)
    string getId();
    string getTitulo();
    int getDuracion();
    string getGenero();
    double getCalificacion();
    
    //Otros Metodos
    virtual string str();
    
protected:
    string iD;
    string titulo;
    int duracion;
    string genero;
    double calificacionPromedio;
};

#endif /*Video_h*/