#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int main()
{
    char usuario[][10]= {"jose", "maria","jesus", "juan", "mech"};
    int nota[10] = {8, 5, 2, 10, 3};
    int i;
    int j;

    for(i = 0; i <5 ; i++)
    {
        printf("alumno : %s nota : %d   \n", usuario[i], nota[i]);

    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)

        {
            printf("%d => %d \n", nota[i], nota[j]);

            if(nota[i]< nota[j])
            {
                int aux = nota[i];
                nota[i]=nota[j];
                nota[j]=aux;

                char auxString[10];
                strcpy(auxString, usuario[i]);
                strcpy(usuario[i], usuario[j]);
                strcpy(usuario[j], auxString);

            }

        }
        for(i = 0; i < 5 ; i++)
        {
            printf("alumno : %s nota : %d   \n", usuario[i], nota[i]);

        }

    }

    return 0;
}
