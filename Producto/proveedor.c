#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Proveedor.h"

#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1
void inicializarProveedores(eProveedor listaProveedores[], int cant)
{
    int i;

    int id[3]= {1, 2, 3};
    char descripcion[3][50]= {"Petrolera", "Petrolera", "Petrolera"};
    char localidad[3][50]= {"Avellaneda", "Bahia Blanca", "Rio negro"};
    char duenio[3][50]= {"YPF", "Axion", "Shell"};
    char cuit[3][50]= {"4444", "5555", "6666"};

    for(i=0; i<3; i++)
    {
        listaProveedores[i].id = id[i];
        strcpy(listaProveedores[i].descripcion,descripcion[i]);
        strcpy(listaProveedores[i].localidad, localidad[i]);
        strcpy(listaProveedores[i].cuit, cuit[i]);
        strcpy(listaProveedores[i].duenio, duenio[i]);
        listaProveedores[i].estado = OCUPADO;
    }
}

void mostrarProveedor(eProveedor unProveedor)
{
    printf("%s %10s %10s %10s %10s\n", "id", "descripcion", "localidad", "duenio", "cuit");
    printf("%d %10s %10s %10s %10s\n", unProveedor.id, unProveedor.descripcion, unProveedor.localidad, unProveedor.duenio, unProveedor.cuit);
}

void mostrarArrayProveedores(eProveedor listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        if(listado[i].estado == OCUPADO)
        {
            mostrarProveedor(listado[i]);
        }
    }
}
