#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1

typedef struct
{
    char codigoDeBarra[13];
    int estado;
    float precio;
    char nombre[50];
  //  char proveedor[50];
    char fechaDeVencimiento[50];
    int idProveedor;
}eProducto;


eProducto pedirProducto();

void inicializarProductos(eProducto[], int);

void mostrarProducto(eProducto);

void cargarArray(eProducto[], int);

void mostrarArray(eProducto[], int);

void construirArray(eProducto[], int);

int insertarProducto(eProducto[], int);

int dameLugarLibre(eProducto[], int);

int borrarProducto(eProducto[], int);

int editarProducto(eProducto[], int);


