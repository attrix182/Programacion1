#ifndef PROVEEDOR_H_INCLUDED
#define PROVEEDOR_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1

typedef struct
{
    int id;
    int estado;
    char descripcion[51];
    char localidad[51];
    char cuit[51];
    char duenio[51];
} eProveedor;

void inicializarProveedores(eProveedor listaProveedores[], int cant);
void mostrarProveedor(eProveedor unProveedor);
void mostrarArrayProveedores(eProveedor listado[], int cant);

//uno a muchos es un id que se repite en el uso, pero no en la declaracion de una estructura


#endif // PROVEEDOR_H_INCLUDED
