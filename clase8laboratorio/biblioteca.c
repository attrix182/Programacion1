#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

int dameUnaPersona(ePersona lista)
{
 printf("Ingrese un nombre:");
 fflush(stdin);
 gets(lista.nombre);

 printf("\nIngrese una edad: ");
 fflush(stdin);
 scanf("%d",&lista.edad);

 return 0;
}
void mostrarUnaPersona(ePersona lista)
{
    printf("%s",lista.nombre);
    printf("%d",lista.edad);
}
