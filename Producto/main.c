#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Producto.h"
#include "proveedor.h"

#define T 10

void mostrarArrayProductosConProveedorElMaximo(eProducto[], int, eProveedor [], int );
void mostrarArrayProductosConProveedorOrdenado(eProducto[],int, eProveedor [], int );
void mostrarArrayProveedorConSusProductos(eProveedor[], int, eProducto[], int);
//void mostrarArrayProductosConProveedor(eProducto listaProductos[], int tamprod, eProveedor listaProveedores[], int tamprov);

int main()
{
    eProducto unProducto;
    eProducto listadoProductos[T];

    eProveedor unProveedor;
    eProveedor listadoProveedores[T];

    construirArray(listadoProductos, T);
    inicializarProductos(listadoProductos, T);

    construirArray(listadoProveedores, T);
    inicializarProveedores(listadoProveedores, T);


    char option;

    do
    {
        printf("MENU:\n");
        printf("(1) Alta.\n");
        printf("(2) Baja.\n");
        printf("(3) Modificar.\n");
        printf("(4) Mostrar.\n");
        printf("(5) Salir.\n");

        printf("\nElija una opcion valida: ");
        fflush(stdin);
        scanf("%c", &option);

        while(option != '1' && option != '2' && option != '3' && option != '4' && option != '5')
        {
            printf("\nOpcion invalida. Intente nuevamente.\n");
            printf("Elija una opcion valida: ");
            fflush(stdin);
            scanf("%c", &option);
        }

        switch(option)
        {
        case '1':
            insertarProducto(listadoProductos, T);
            break;

        case '2':
            borrarProducto(listadoProductos,T);
            break;
        case '3':
            editarProducto(listadoProductos, T);
            break;

        case '4':

            printf("%s %10s %10s %10s %10s\n", " nombre  " , " id Proveedor  ", "  codigo De Barras  ", " F De Venc ", "  precio  ");
            mostrarArray(listadoProductos, T);

            printf("%s %10s %10s %10s %10s\n", "id", "descripcion", "localidad", "duenio", "cuit");
            mostrarArrayProveedores(listadoProveedores, T);

//            mostrarArrayProductosConProveedor(listadoProductos, T, listadoProveedores, T);

            break;

        case '5':
            option= '5';
            printf("\nSaliendo...\n\n");
            break;

        default:
            printf("\nOpcion invalida. Intente nuevamente.\n");
            break;
        }

        system("pause");
        system("cls");
    }
    while(option != '5');

   return 0;
}
/*
 void mostrarArrayProductosConProveedor(eProducto listaProductos[], int tamprod, eProveedor listaProveedores[], int tamprov)
    {
        int i;
        int j;
        for(i=0; i<tamprod; i++)
        {
            mostrarProducto(listaProductos[i]);

            for(j=0; j<tamprov; j++)
            {
                if(listaProductos[i].idProveedor == listaProveedores[j].id)
                    mostrarProveedor(listaProveedores[j]);
            }
        }
    }

*/
