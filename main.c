#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "movies.h"
#include "utn.h"

int main(int argc, char *argv[])
{
    EMovie movie;
    char seguir='s';
    char opcion;
    while(seguir=='s')
    {
        cargarMenu();
        scanf("%s",&opcion);
        switch(opcion)
        {
            case '1':
                system("cls");
                agregarPelicula(&movie);
                break;
            case '2':
                system("cls");
                borrarPelicula(&movie);
                getche();
                break;
            case '3':
               system("cls");
               generarPagina(&movie);
               getche();
               break;
            case '4':
                seguir = 'n';
                break;
            default:
                printf("\nOpcion invalida. Reingrese.\n");
                system("pause");
                break;
        }
    }

    return 0;
}
