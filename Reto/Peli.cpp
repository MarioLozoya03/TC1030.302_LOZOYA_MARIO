#include "Peli.h"
#include"Video.h"

// Metodos Constructores
Peli::Peli():Video() 
{
   oscares= 6; 
}

// constructor con parametros
Peli::Peli(string _iD, string _titulo, int _duracion,string _genero, double _calificacionPromedio, int _oscares) : Video( _iD, _titulo, _duracion, _genero, _calificacionPromedio) 
{    
    oscares= _oscares;
}
//Metodos de modificadores (sets)
void  Peli::setOscares(int _oscares)
{
  oscares = _oscares; 
}

// Metodos de acceso (get)
int Peli::getOscares()
{
    return oscares;
}
    
//Otros Metodos
string Peli::str()
{
    return iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio)+ ',' + to_string(oscares);
  
}    
ostream &operator <<(ostream &out, const Peli &v)
{
  out << v.iD << ',' << v.titulo << ',' << v.duracion << ',' << 
  v.genero << ',' << v.calificacionPromedio << ',' << v.oscares << endl;
  
  return out;
}
