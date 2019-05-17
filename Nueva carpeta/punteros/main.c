#include <stdio.h>
#include <stdlib.h>
#include "ctype.h"

int main()
{
    int salir;
    do{
    char letra;
    char* pLetra = NULL;

    pLetra = &letra;
    printf("pido char\n");
    scanf("%c", &letra);
    fflush(stdin);

    printf("Tu char : %c \n", *pLetra);

    system("pause");
    system("cls");
    }while(salir);
    return 0;
}
