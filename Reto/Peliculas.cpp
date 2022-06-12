#include "Peli.h"
#include "Peliculas.h"
#include <sstream>
#include <fstream>

Peliculas::Peliculas(){}
Peliculas::Peliculas(string _iD, string _titulo, int _duracion,string _genero, float _calificacionPromedio, int _oscares)
{}

//otros Metodos
int Peliculas::leerArchivo()
{
    //fin-file input
    fstream fin;
    //
    string row[6];
    //
    string line;
    string word;

    //Abrir archivo de entrada
    fin.open("Pelicula.csv",ios::in);

    //Inicializar el atributo cantidad con 0
    int cantidad=0;

    //lee una linea del archivo y la almacena en line
    while (getline(fin,line)){
        //Despliega en consola la linea
        //cout<<"aqui estoy";
        cout<< cantidad<< line<< endl;
        
        //usado para separar las palabras split
        stringstream s(line);
        int iR=0;
        //Extrae caracteres de s y los almacena en word hasta que encuentra el delimitador
        while(getline(s,word, ','))
        {
          cout<<"estoy aqui";
        //añade la word al arreglo row e incrementa iR p/la proxima palabras
            
            row[iR++]= word;
        }

        arrPtrPeliculas[cantidad]=new Peli(row[0],     
        row[1], stoi(row[2]), row[3], stof(row[4]),                                   stoi(row[5]));

        //Se muestra en consola la separacion
        cout << "iD" << row[0] << "\n";
        cout << "Titulo" << row[1] << "\n";
        cout << "Duracion" << row[2] << "\n";
        cout << "Genero" << row[3] << "\n";
        cout << "Calificacion" << row[4] << "\n";
        cout << "Oscares" << row[5] << "\n" ;

        //Desplegamos en consola la pelicula con el metodo str() de Peli
        cout << "Dentro del objeto:" << arrPtrPeliculas[cantidad]->str()<<endl;

        //incrementar el atributo cantidad para la siguiente pelicula
        
               
        cantidad= cantidad + 1;
        
        //HAY QUE HACER UN SET DE LA CANTIDAD DE PELIS
      
        //cout << "cantidad actual: " << cantidad;
    }
    fin.close();

        //Sale de ciclo cuando ya no existen mas lineas en el archivo

        //Desplegar todas las Peliculas leidas
        for(int iR=0; iR<cantidad;iR++){
            cout<< iR <<"-"<<arrPtrPeliculas[iR]->str()<<endl;
        }
    return cantidad;
}
    //Metodos modificadores(SETS)
    void Peliculas::setPtrPelicula(Peli *_ptrPelicula){
        
        arrPtrPeliculas[cantidad++]= _ptrPelicula;
    }
    void Peliculas::setCantidadPeliculas(int _cantidad){
        cantidad= _cantidad;
    }

    //Metodos de acceso(GETS)
    Peli * Peliculas::getPtrPelicula(string _id){
       return new Peli;
    }
    int Peliculas::getCantidadPeliculas(){
        return cantidad;
    }

    //otros Metodos
    void Peliculas::reporteTodasLasPeliculas()
    {
        double promedio;
        double acum = 0;
        for(int iR = 0; iR < cantidad; iR++)
        {
        cout << "P" << arrPtrPeliculas[iR]->str() << endl;
        acum = acum + arrPtrPeliculas[iR]->getCalificacion();
        }
        //cout << "ëstoy aqui";
        promedio = acum / 35;
        cout << "Promedio: " << promedio << endl;

    }
    void Peliculas::reporteConCalificacion(float _calificacionPromedio){
        int count=0;
        for (int iR=0; iR < cantidad; iR++){
            if (arrPtrPeliculas[iR]-> getCalificacion()==_calificacionPromedio)
            {
                cout<< iR<< ' ' << arrPtrPeliculas[iR]->str()<<endl;
                count++;
            }
        }
        if (count==0)
        cout<<"No hay peliculas de la calificacion deseada: " << _calificacionPromedio <<endl;
    }

    void Peliculas::reporteGenero(string _genero){
        int count=0;
        
        for (int iR=0; iR < cantidad; iR++){
            if (arrPtrPeliculas[iR]-> getGenero()== _genero)
            {
                cout<< iR<< ' ' << arrPtrPeliculas[iR]->str()<<endl;
                count++;
            }
        }
        if (count==0)
        cout<<"No hay peliculas del genero: " << _genero <<endl;
    }