#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Producto.h"


void inicializarProductos(eProducto listaProductos[], int cant)
{
    int i;

    float precio[3]= {50, 42,95, 9.52};
    char nombre[3][50]= {"AAA", "BBB", "CCC"};
    char proveedor[3][50]= {"DDD", "EEE", "FFF"};
    char codigoDeBarra[3][13]= {"77951234", "77959876", "77953791"};
    char fechaDeVencimiento[3][50]= {"22/10/2020", "10/05/2019", "15/12/2008"};

    for(i=0; i<3; i++)
    {
        strcpy(listaProductos[i].codigoDeBarra,codigoDeBarra[i]);
        strcpy(listaProductos[i].nombre,nombre[i]);
        strcpy(listaProductos[i].proveedor, proveedor[i]);
        strcpy(listaProductos[i].fechaDeVencimiento, fechaDeVencimiento[i]);
        listaProductos[i].precio=precio[i];
        listaProductos[i].estado = OCUPADO;
    }
}


eProducto pedirProducto()
{
    eProducto productoParaRetornar;

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(productoParaRetornar.nombre);

    printf("Ingrese proveedor: ");
    fflush(stdin);
    gets(productoParaRetornar.proveedor);

    printf("Ingrese codigo de barra: ");
    fflush(stdin);
    gets(productoParaRetornar.codigoDeBarra);

    printf("Ingrese fecha de vencimiento: ");
    fflush(stdin);
    gets(productoParaRetornar.fechaDeVencimiento);

    printf("Ingrese precio: ");
    scanf("%f", &productoParaRetornar.precio);

    productoParaRetornar.estado= OCUPADO;

    return productoParaRetornar;
}


void mostrarProducto(eProducto unProducto)
{
    printf("%s %10s %15s %15s %15f %10d\n", unProducto.nombre, unProducto.proveedor, unProducto.codigoDeBarra, unProducto.fechaDeVencimiento, unProducto.precio, unProducto.estado);
}


void cargarArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i]= pedirProducto();
    }
}


void mostrarArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        if(listado[i].estado == OCUPADO)
        {
            mostrarProducto(listado[i]);
        }
    }
}


void construirArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i].estado= LIBRE;
        listado[i].precio= 0;
        strcpy(listado[i].nombre, "");
        strcpy(listado[i].proveedor, "");
        strcpy(listado[i].codigoDeBarra, "");
        strcpy(listado[i].fechaDeVencimiento, "");
    }
}


int insertarProducto(eProducto listado[], int cant)
{
    int indice;
    indice= dameLugarLibre(listado, cant);
    if(indice != -1)
    {
        listado[indice]= pedirProducto();
    }
    return indice;
}


int dameLugarLibre(eProducto listado[], int cant)
{
    int i;
    int index= -1;

    for(i=0; i<cant; i++)
    {
        if(listado[i].estado == LIBRE)
        {
            index= i;
            break;
        }
    }
    return index;
}


int borrarProducto(eProducto lista[], int tam)
{
    int i;
    int loEncontro= 0;

    char codigo[50];

    printf("Ingrese el codigo de barra: ");
    fflush(stdin);
    gets(codigo);

    for(i=0; i<tam; i++)
    {
        if(strcmp(lista[i].codigoDeBarra, codigo) == 0)
        {
            lista[i].estado= LIBRE;
            loEncontro= 1;
            break;
        }
    }

    if(loEncontro == 0)
    {
        printf("Codigo inexistente");
    }

    return 0;
}


int editarProducto(eProducto lista[], int tam)
{
    int i;
    int loEncontro= 0;

    char codigo[50];

    printf("Ingrese el codigo de barra: ");
    fflush(stdin);
    gets(codigo);

    for(i=0; i<tam; i++)
    {
        if(strcmp(lista[i].codigoDeBarra, codigo) == 0)
        {
            printf("Ingrese el nuevo precio: ");
            scanf("%f", &lista[i].precio);
            loEncontro= 1;
            break;
        }
    }

    if(loEncontro == 0)
    {
        printf("Codigo inexistente");
    }

    return 0;
}
