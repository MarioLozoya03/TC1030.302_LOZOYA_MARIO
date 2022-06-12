#include "Serie.h"
#include"Video.h"

Serie::Serie():Video(){
    cantidad=0;
}
Serie::Serie(string _iD, string _titulo, int _duracion,string _genero, double _calificacionPromedio):
Video(_iD,_titulo,_duracion,_genero, 0){
    cantidad= 0;
}

//Metodos modificadores (SETS)
void Serie::Serie::setEpisodio(int _index,Episodio _episodio)
{
    //validar que el _index sea correcto (cantidad>=0) && (_index<cantidad)
    // si no cumple el index no se cambia
    
    if ((cantidad>=0) && (_index<cantidad))
        episodios[_index]= _episodio;
}
void Serie::setCantidad(int _cantidad){
    cantidad=_cantidad;
}
    
//Metodos de acceso (GETS)
Episodio Serie::getEpisodio(int _index){
    Episodio ep;
    //validar que el _index sea correcto (cantidad>=0) && (_index<cantidad)
    // si no cumple el index no se cambia 
    
    if ((cantidad>=0) && (_index<cantidad))
        return episodios[_index];
    else
        return Episodio();
}
int Serie::getCantidad(){
    return cantidad;
}
    
//Otros Metodos
double Serie::calculaPromedio(){
    double acum=0;
    for(int index=0; index< cantidad; index ++)
        acum= acum + episodios[index].getCalificacion() ;

    if (cantidad>0)
        return acum/ cantidad;
    else
        return 0;
}
string Serie::str()
{
    // concatenar todos los episodios de la serie
    string acum = "\n";
    for(int index=0; index< cantidad; index ++)
        acum = acum + episodios[index].str() + '\n';
    return iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio)+ acum;
  
}
