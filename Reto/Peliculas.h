#ifndef Peliculas_h
#define Peliculas_h

#include <stdio.h>
#include "Peli.h"
#include <sstream>
#include <fstream>
const int MAX_PEL =50;

class Peliculas{
//Atributos
private:
  Peli * arrPtrPeliculas[MAX_PEL];
  int cantidad;
//Metodos

public:
  //Metodo construtor
  Peliculas();
  Peliculas(string _iD, string _titulo, int _duracion,string _genero, float _calificacionPromedio, int _oscares);
  
  //Metodos modificadores(SETS)
  void setPtrPelicula(Peli *_ptrPelicula);
  void setCantidadPeliculas(int _cantidad);
  
  //Metodos de acceso(GETS)
  Peli * getPtrPelicula(string _id);
  int getCantidadPeliculas();
  
  
  //otros Metodos
  int leerArchivo();
  void reporteTodasLasPeliculas();
  void reporteConCalificacion(float _calificacionPromedio);
  void reporteGenero(string _genero);
  
  
};

#endif /*peli_h*/