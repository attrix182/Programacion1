#include <stdio.h>
#include <stdlib.h>

void mostrarArray(int array[], int)
{

    int i;
    for (i=0; i<tam ; i++)
    {
        printf("d \n", array[i]);
    }

}

void cargarArray(int array[])
{
    int i;
    for (i=0; i<tam ; i++)
    {
        printf("d", "ingrese numero: ");
        scanf("%d", &array[i])
    }
}
int buscarValor(int array[], int tam[], int valor)
{
    int indice;
     int i;

     for(i=0; i<tam; i++)
     {
         if(array[i]==valor)
         {
             indice = i;
             break;

         }
     }

    return retorno;
}

