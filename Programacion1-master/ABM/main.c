
#include <stdlib.h>
#include "Empleado.h"

#define T 10


int menuDeOpciones(char[]);


int main()
{

    int indice;
    int opcion;

    eEmpleado lista[T];
    inicializarEmpleados(lista,T);


    hardcodearDatosEmpleados(lista,4);
    do
    {
        opcion = menuDeOpciones("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Salir\nElija una opcion: ");
        switch(opcion)
        {
        case 1:
            cargarEmpleado(lista,  T);

            break;
        case 2:
            borrarEmpleado(lista, T, 3);
            break;
        case 3:

            modificar(lista, T, 3);
            break;

        case 4:
            mostrarListaEmpleados(lista, T);
            break;

        }
    }
    while(opcion!=10);



    //inicializarEmpleados(lista, T);




    return 0;
}

int menuDeOpciones(char mensaje[])
{
    int opcion;
    printf("%s", mensaje);
    scanf("%d", &opcion);

    return opcion;
}
