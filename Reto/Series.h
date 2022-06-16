#ifndef Series_h
#define Series_h

#include <stdio.h>
#include "Serie.h"
#include <sstream>
#include <fstream>
const int MAX_SERIES =50;

class Series{
//Atributos
private:
  //Arreglo de apuntadores de la clase serie
  Serie * arrPtrSeries[MAX_SERIES];
  //Cantidad de series dadas de alta en arrPtrSeries
  int cantidad{};

//Metodos
public:
  //construtor que inicializa el *arrPtrSeries[MAX_SERIES]
  Series();

  //Lee las Seriees desde un archivo csv y las carga en el arreglo arrPtrSeries
  void leerArchivo();

  //Se asigna el apuntador al arrPtrSeries[cantidad]
  void setPtrSerie(Serie *ptr);

  //Asigna el atributo cantidad del valor de _cantidad
  void setCantidadSeries(int _cantidad);

  //Retorna el apuntador Serie que tiene el iD igual al _iD recibido en el parámetro de entrada
  //Si no existe ese _iD retorna nullPtr
  Serie* getPtrSerie(string _iD);

  //Retorna el valor del atributo cantidad
  int getCantidadSeries();

  //Reporte de todas las series que estan en el arreglo arrPtrSeries
  void reporteTodasLasSeries();

  //Reporte de todas las series que estan en el arreglo arrPtrSeries con cierta calificación
  void reporteConCalificacion(double _calificacion);

  //Reporte de todas las series que estan en el arreglo arrPtrSeries con cierto género
  void reporteGenero(string _genero);

  //Calcular la calificacion de cada serie en base a sus episodios 
  void calcularCalificacionSeries();

};

#endif /*Series_h*/