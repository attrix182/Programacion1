#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Producto.h"
#include "Proveedor.h"


void inicializarProductos(eProducto listaProductos[], int cant)
{
    int i;

    float precio[10]= {42, 43, 44, 40, 41, 42, 35, 36, 37, 38};
    char nombre[10][50]= {"infinia", "axion power", "V-Power", "infinia diesel", "Axion diesel", "V-Power diesel", "super", "Axion super", "normal", "querosene" };
    //char proveedor[10][50]= {"AAA", "EEE", "FFF"};
    char codigoDeBarra[10][13]= {"100", "200", "300", "400", "500", "600" ,"700", "800", "900", "999"};
    char fechaDeVencimiento[10][50]= {"01/02/2020", "01/03/2020", "01/04/2020"};
    int idProveedor[10]= { 1, 2, 3, 1, 2, 3, 1 };

    for(i=0; i<3; i++)
    {
        strcpy(listaProductos[i].codigoDeBarra,codigoDeBarra[i]);
        strcpy(listaProductos[i].nombre,nombre[i]);
        listaProductos[i].idProveedor = idProveedor[i];
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
    scanf("%d", &productoParaRetornar.idProveedor);

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

    printf("%s %10d %10s %15s %15.2f \n", unProducto.nombre, unProducto.idProveedor, unProducto.codigoDeBarra, unProducto.fechaDeVencimiento, unProducto.precio);
    printf("\n");
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
        listado[i].idProveedor = "";
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


