#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int numerospares = 0;
    int positivos = 0;
    int negativos = 0;
    int ceros = 0;
    int suma = 0;
    int sumaNeg = 0;
    int difereciaNegPos = 0;
    int numeromax;
    int flagMax = 1;
    int flagMin = 1;
    int numeromin;
    int promedio;
    int numerosentre239y5 = 0;
    char seguir;

    do
    {
        printf("ingrese un numero: \n");
        scanf("%d", &numero);
        fflush(stdin);

        while (numero < -500 || numero > 500)
        {
            printf("Reingrese un numero: \n");
            scanf("%d", &numero);
            fflush(stdin);

        }

        if (numero != 0 && numero % 2 == 0 )
        {
            numerospares++;
        }


        if (numero == 0)
        {
            ceros++;
        }
        else if (numero > 0 )
        {
            positivos++;
            suma = suma + numero;
        }
        else if (numero < 0)
        {
            negativos++;
            sumaNeg = sumaNeg + numero;
        }

        if (numero > numeromax || flagMax == 1)
        {
            numeromax = numero;
            flagMax = 0;
        }
        if (numero < numeromin || flagMin == 1)
        {
            numeromin = numero;
            flagMin = 0;
        }


        if (numero >= -239 && numero <= 5 )
        {
            numerosentre239y5++;
        }

        difereciaNegPos = sumaNeg - suma;



        printf(" �Desea agregar otro numero? s/n : ");
        scanf( "%c", &seguir );
        while(seguir != 's' && seguir != 'S' && seguir != 'n' && seguir != 'N')
        {
            printf(" ingrese s/n : ");
            scanf( "%c", &seguir );

        }


    }
    while(seguir != 'n' && seguir != 'N');

    promedio = suma / positivos;

    printf("la cantidad de pares es: %d\n", numerospares);
    printf("la cantidad de ceros es: %d\n", ceros);
    printf("la cantidad de positivos es: %d\n", positivos);
    printf("la cantidad de negativos es: %d\n", negativos);
    printf("el promedio de los positivos es: %d\n", promedio);
    printf("el maximo es : %d\n", numeromax);
    printf("el minimo es : %d\n", numeromin);
    printf("entre -239 y 5 hay : %d\n", numerosentre239y5);
    printf("la suma de negativos es : %d\n", sumaNeg);
    printf("la diferencia entre negativos y positivos es : %d\n", difereciaNegPos);

    system("pause");
    return 0;

}
