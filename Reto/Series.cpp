#include "Serie.h"
#include "Series.h"
#include <iostream>
#include <fstream>
using namespace std;

Series::Series(){
  cantidad=0;
}

void Series::leerArchivo()
{
    //Declaracion de variables
    string linea, dato, row[6];
    //Variable para llevar el contador de cantidad de series leídas
    int iRow{}, iS{} ,cantEpisodios{};
    //Declaración de variable para el archivo
    fstream lectura;
    Episodio *episodio;
    
    //Abrir archivo de entrada
    lectura.open("Serie2021.csv",ios::in);

    //Inicializar el atributo cantidad de series con 0
    int cantidad = 0;
    //Ciclo para leer todo el archivo 
    while (getline(lectura,linea)){
        //Despliega en consola la linea
        std::stringstream registro(linea);
        int iRow = 0;
        //Ciclo para separar los elementos de la serie (string)
        while(getline(registro,dato, ','))
        {
          row[iRow++] = dato;
        }
        //Crear un objeto de la clase Serie
        setPtrSerie(new Serie(row[0], row[1], stoi(row[2]), row[3], stof(row[4]),stod(row[5])));

        //Se muestra en consola la separacion
        cout << "iD: " << row[0] << "\n";
        cout << "Titulo: " << row[1] << "\n";
        cout << "Duracion: " << row[2] << "\n";
        cout << "Genero: " << row[3] << "\n";
        cout << "Calificacion: " << row[4] << "\n";
        cout << "   " << "\n";
      
        //Vamos por la siguiente serie del archivo, se incrementa para la siguiemte
        cantidad++;                     
      }
      lectura.close();

//****************** Leer los episodios de las series ******************
    lectura.open("Episodio2021.csv",ios::in);     
    //Ciclo para leer todo el archivo
   while(getline(lectura,linea))
    {
      std::stringstream registro(linea);
      iRow = 0;
      while (getline(registro, dato, ','))
      {
        row[iRow++] = dato;
      }
      
      //iD- Convertir int -Sacar la posición de la serie 500-0, 501-1
      iS = stoi(row[0])-500; //Posición del arreglo de episodios de la serie iS 
      //Crear el episodio 
      episodio = new Episodio(row[1], stoi(row[2]), stod(row[3]));
      //Traer la cantidad de episodios de la seire iS
      cantEpisodios = arrPtrSeries[iS]-> getCantidad();
      //Verificar si todavía podemos añadir al otro Episodio al arreglo
      if (cantEpisodios < 5)
      {
          arrPtrSeries[iS]-> setEpisodio(cantEpisodios, *(episodio));
          arrPtrSeries[iS]-> setCantidad(++cantEpisodios);
      }
    }
    lectura.close();
}//Cierra leerArchivo


// Métodos modificadores (sets)
void Series::setPtrSerie(Serie * _ptrSerie){
  if (cantidad < MAX_SERIES){
    arrPtrSeries[cantidad++]= _ptrSerie;
  }
}

void Series::setCantidadSeries(int _cantidad){
  cantidad = _cantidad;
}
// Metodos (gets)
Serie* Series::getPtrSerie(string _iD){
  for (int iRow = 0; iRow < cantidad; iRow++)
  {
    return arrPtrSeries[iRow];
  }
  return nullptr;
}

int Series::getCantidadSeries(){
  return cantidad;
}

// Reporte de todas las series del arreglo arrPtrSeries que tienen cierta calificación + desplegar todas las series contenidas en el arreglo + usar str()
void Series::reporteTodasLasSeries(){
  // tambien debe de calcular el promedio de todas las series y desplegarlo al final
  double prom = 0;
  double acum = 0;
  for(int iRow = 0; iRow < cantidad; iRow++){
        cout << "s" << arrPtrSeries[iRow]->str() <<endl;
        acum = acum + arrPtrSeries[iRow]->getCalificacion();
        prom= acum/cantidad;
  }
  cout << "Promedio: " << prom << endl;
}
void Series::reporteConCalificacion(double _calificacion){

  int count = 0;
  for (int iRow = 0; iRow < cantidad; iRow++){
    if (arrPtrSeries[iRow]-> getCalificacion() == _calificacion){
      cout << iRow << ' ' << arrPtrSeries[iRow]->str() << endl;
      count++;
    }
}
  if (count == 0){
    cout<<"No hay sieries con la calificacion deseada: "<< _calificacion <<endl;
  }  
}
void Series::reporteGenero(string _genero){

  int count=0;
  for (int iRow = 0; iRow < cantidad; iRow++){
    if (arrPtrSeries[iRow]-> getGenero() == _genero){
      cout << iRow << ' ' << arrPtrSeries[iRow]->str() << endl;
      count++;
    }
}
  if (count == 0){
    cout<<"No hay sieries con el genero deseado: "<< _genero <<endl;
  }
  
  
}
void Series::calcularCalificacionSeries()
{
  float promedio, promedioSeries, acum;
  for (int iRow = 0; iRow < cantidad; iRow++){
    promedio = arrPtrSeries[iRow]->getCalificacion();
    acum= acum +promedio;
  }
  promedioSeries = acum/cantidad;
  cout << "Promedio Series:" << promedioSeries << endl;
}