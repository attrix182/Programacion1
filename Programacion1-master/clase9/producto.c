#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "producto.h"

void cargarArray(int tam, eProducto listado[])
{
    int i;
    for(i = 0; i< tam; i++)
    {
        listado[i]=pedirProducto();
    }
}

eProducto pedirProducto()
{
    eProducto productoParaRetornar;

    printf("ingrese codigo:");
    fflush(stdin);
    gets(productoParaRetornar.codigoDeBarras);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(productoParaRetornar.nombre);

    printf("Ingrese proveedor: ");
    fflush(stdin);
    gets(productoParaRetornar.proveedor);

    printf("Ingrese precio: ");
    scanf("%f", &productoParaRetornar.precio);

    printf("Ingrese fecha de vencimiento: ");
    gets(productoParaRetornar.fechaDeVencimiento);

    return productoParaRetornar;
}
