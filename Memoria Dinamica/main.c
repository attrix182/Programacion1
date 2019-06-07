#include <stdio.h>
#include <stdlib.h>
#define T 5
int main()
{




    int* pNumeros;
    int* aux;
    int i;

    pNumeros = (int*) malloc(sizeof(int)*T);

    if(pNumeros!=NULL)
    {
        for(i=0; i<T; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", pNumeros+i);
        }
        for(i=0; i<T; i++)
        {
            printf("%d\n", *(pNumeros+i));
        }

        aux = (int*) realloc(pNumeros,sizeof(int)*(T+5));
        if(aux!=NULL)
        {
            pNumeros = aux;
            for(i=T; i<T+5; i++)
            {
                printf("Ingrese un numero: ");
                scanf("%d", pNumeros+i);
            }
            for(i=0; i<T+5; i++)
            {
                printf("%d\n", *(pNumeros+i));
            }
          pNumeros=(int*) realloc(pNumeros,sizeof(int)*4);
          printf("Luego de achicar\n");
            for(i=0; i<T+5; i++)
            {
                printf("%d\n", *(pNumeros+i));
            }

        }
        else
        {
            printf("no hay memoria suficiente!!!");
        }
    }


    return 0;
}
