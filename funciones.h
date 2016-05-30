#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "utn.h"
/*
struct EMovie{
    char titulo[20];
    char genero[20];
    int duracion;
    char descripcion[50];
    int puntaje;
    char linkImagen[50];
    int Estado;
};

typedef struct EMovie Movie;

/**\brief Inicializa el array de estructuras Movie
*\return void
*/
//void list_initMovieList(void);

/** \brief Crea una estructura del tipo Movie en forma dinámica
 * \return Devuelve un puntero a la estructura creada
 */
//Person* list_newMovie(void);



/**
 *  Agrega una pelicula al archivo binario
 *  @param movie la estructura a ser agregada al archivo
 *  @return retorna 1 o 0 de acuerdo a si pudo agregar la pelicula o no
 */
//int agregarPelicula(Movie* p);
/**
 *  Borra una pelicula del archivo binario
 *  @param movie la estructura a ser eliminada al archivo
 *  @return retorna 1 o 0 de acuerdo a si pudo eliminar la pelicula o no
 */
//int borrarPelicula(EMovie movie);

/**
 *  Genera un archivo html a partir de las peliculas cargadas en el archivo binario.
 *  @param lista la lista de peliculas a ser agregadas en el archivo.
 *  @param nombre el nombre para el archivo.
 */
//void generarPagina(EMovie lista[], char nombre[]);


/** \brief Guarda una struct al final de un archivo binario bin.dat
 * \param struct Emovie* p puntero a struct a ser escrita
 * \return 0: error, 1:OK
 */
//int GuardarPelicula(Movie* p);



#endif // FUNCIONES_H_INCLUDED
