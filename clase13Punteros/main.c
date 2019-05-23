#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
#include "string.h"


int main()
{
    int i;
    int pAuxPersona;
    int auxNuevaLong;

    ePersona *pArrayPersona;
    pArrayPersona = malloc(sizeof(ePersona));
    if(pArrayPersona == NULL)
    {
        printf("\n No hay lugar \n");
        exit(0);
    }

    for(i=0; i<10; i++)
    {
        (pArrayPersona+i)->edad = i;
        auxNuevaLong = sizeof(ePersona) * (i+1);
        pAuxPersona =realloc(pArrayPersona, auxNuevaLong);

        if(pAuxPersona ==NULL)
        {
            printf("\n no hay lugar \n");
            break;
            pArrayPersona = pAuxPersona;
        }
    }

    for(i=0; i<10; i++)
    {
        printf("\n %d \n", (pArrayPersona+i)->edad);
    }

    return 0;
}
