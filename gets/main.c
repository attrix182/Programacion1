#include <stdio.h>
#include <stdlib.h>

void mostrarVector(int datos[10], int tamanio);
void cargarVector(int datos[], int tamanio);
void ordenarVector(int datos[], int tamanio);

int main()
{
    char usuario[][10]= {"jose", "maria","jesus", "juan", "mech"};
    int nota[10] = {8, 5, 2, 10, 3};
    int i;
    int j;

    mostrarVector(nota, 5);
    cargarVector(nota, 5);
    mostrarVector(nota, 5);

    for(i = 0; i <5 ; i++)
    {
        printf("alumno : %s nota : %d   \n", usuario[i], nota[i]);
        gets(usuario[i]);
        printf("ingrese nota : %d", i+1);
        scanf("%d", &nota[i]);
    }
    for(j = 0; j < 4 ; i++)
    {
        printf("alumno : %s nota : %d   \n", usuario[i], nota[i]);

    }
    return 0;
}
void mostrarVector(int datos[], int tamanio)
{
    int i;
    for(i=0; i<tamanio; i++)
    {
        printf("nota : %d \n", datos[i]);
    }
}
void cargarVector(int datos[], int tamanio)
{
    int i;
    for(i=0; i<tamanio; i++)
    {
        datos[i] = -1;
    }
}
