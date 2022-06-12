#ifndef Serie_h
#define Serie_h

#include <stdio.h>
#include "Video.h"
#include "Episodio.h"


class Serie: public Video{
private:
    Episodio episodios[5];
    // cantidad de episodios de la Serie 
    int cantidad; 
    
public:
    Serie();
    Serie(string _iD, string _titulo, int _duracion,string _genero, double _calificacionPromedio);

    //Metodos modificadores (SETS)
    void setEpisodio(int _index,Episodio _episodio);
    void setCantidad(int _cantidad);
    
    //Metodos de acceso (GETS)
    Episodio getEpisodio(int _index);
    int getCantidad();
    
    //Otros Metodos
    double calculaPromedio();
    string str();
    
};

#endif /*Serie_h*/