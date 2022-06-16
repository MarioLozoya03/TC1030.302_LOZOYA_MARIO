#ifndef Peli_h
#define Peli_h

#include <stdio.h>
#include "Video.h"

using namespace std;

class Peli : public Video {
    
public:
    // Metodos Constructores
    Peli();
    Peli(string _iD, string _titulo, int _duracion,string _genero, double _calificacionPromedio, int _oscares);

    //Metodos de acceso (sets)
    void setOscares(int _oscares);
   
    // Metodos de acceso (get)
    int getOscares();

    //Otros Metodos
    string str();
    friend ostream & operator <<(ostream &out, const Peli &v);

protected:
    int oscares;
};

#endif /*peli_h*/