#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main()
{
    int *x;
    int i;
    int aux;

    x = (int*) calloc(sizeof(int),CANT);

    if(x!=NULL)
    {

        for(i=0;i<CANT;i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d",(x+i));
        }

        for(i=0;i<CANT;i++)
        {
            printf("\nEl valor es: %d\n", *(x+i));
        }
    }
            printf("Agrego 5 mas: \n");
            aux=(int*)realloc(x,CANT+5);

            if(aux!=NULL)
            {
                x=aux;

                for(i=0;i<CANT;i++)
                {
                printf("\nIngrese un numero:");
                scanf("%d",(x+i));

                }
                for(i=0;i<CANT;i++)
                {
                printf("\nEl valor es: %d\n", *(x+i));

                }
            }
              printf("\nQuito 4\n");
              aux=(int*)realloc(x,sizeof(int)*(CANT+5-4));
              for(i=0;i<CANT+5;i++)
              {
                printf("\nEl valor es: %d\n", *(x+i));
              }


    return 0;
}






//// SEGMENTO DE CODIGO: x=x+1;

//// MEMORIA ESTATICA: Guarda las variables globales.

//// HEAP o MONTON: Es el segmento de la memoria dinamica.

//// PILA STACK: Se guardan las variables como int x, fi(3) o int* x. No sirve para guardar datos. En el stack guardo direcciones de memoria de punteros.

//// La funcion Sizeof devuelve la cantidad de bytes de algo.

//// Malloc sirve para pedir espacio en la memoria.

//// calloc sirve para pedir espacio en la memoria y inicializa todo en 0.

//// Realloc encuenta un espacio vacio y reasigna laas variabls en la memoria.
