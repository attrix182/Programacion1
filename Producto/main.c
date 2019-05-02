#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Producto.h"

#define T 10

int main()
{
    eProducto unProducto;
    eProducto listadoProductos[T];

    construirArray(listadoProductos, T);
    inicializarProductos(listadoProductos, T);

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
            mostrarArray(listadoProductos, T);
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
