#include <stdio.h>
#include <stdlib.h>
#include "ctype.h"

/** \brief Permite cargar un caracter
 *
 * \param char*
 * \return int [0] sino se pudo cargar
 *             [1] si se pudo cargar el caracter
 *
 */
int getCaracter(char*);

/** \brief
 *
 * \param char*
 * \return void
 *
 */
void mostrarLetra(char*);

int main()
{
    char letra;
    int estado;
    estado = getCaracter(&letra);
    if(estado ==1)
    {
        printf("dato cargado con exito\n");
    }
        else{
             printf("error dato no cargado\n");
        }
    mostrarLetra(NULL);

    return 0;
}



int getCaracter(char* pLetra)
{
    int cargo = 0;
    if(pLetra != NULL)
    {
        printf("ingrese un caracter\n");
        fflush(stdin);
        scanf("%c", pLetra);
        cargo=1;
    }
            return cargo;
}


void mostrarLetra(char* pLetra)
{
    if(pLetra != NULL)
    {
        printf("%c", *pLetra);
    }
}
