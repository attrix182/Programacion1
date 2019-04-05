#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[50];

    printf("nombre : ");
    gets(nombre);

    printf("Su nombre es: %s ", nombre);

    return 0;
}
