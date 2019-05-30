#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#define ARCHIVO ".\\alumnos.csv"
typedef struct
{
    char nombre[50];
    int legajo;
    int nota;
    int estado;

} eAlumno;

int main()
{
    FILE *pArchivo;
    eAlumno unAlumno;
    if((pArchivo = fopen(ARCHIVO, "w"))==NULL)
    {
        printf("No se puedo leer");
        exit(1);
    } else
    {
        printf("se puedo");
    }

    unAlumno.legajo = 1;
    unAlumno.nota = 4;
    strcpy(unAlumno.nombre, "juan");
    fflush(stdin);

    char texto[]="lalala,555,10";
    int largo = strlen(texto);
    fwrite(texto, sizeof(char),largo,pArchivo);
    fclose(pArchivo);



    return 0;
}


