
#include "Empleado.h"


void cargarEmpleado(eEmpleado lista[], int tam)
{
    int i;

    i = buscarLibre(lista, tam);
    if(i!=-1)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &lista[i].legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);
        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c", &lista[i].sexo);
        printf("Ingrese sueldo bruto: ");
        scanf("%f", &lista[i].sueldoBruto);

        lista[i].sueldoNeto =lista[i].sueldoBruto*0.85;

        lista[i].estado = OCUPADO;

    }
    else
    {
        printf("No hay espacio");
    }



}

void mostrarListaEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEmpleado(lista[i]);
        }

    }
}
void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("%d-%s-%c-%f-%f\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);

}
int buscarLibre(eEmpleado lista[], int tam)
{
    int i;
    int index=-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}
void inicializarEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = LIBRE;
    }
}

void hardcodearDatosEmpleados(eEmpleado lista[], int tam)
{
    int i;
    int legajos[]={1,8,9,7,2,4};
    char nombres[][50]={"Maria","Pedro","Jose","Pedro","Pablo","Mateo"};
    char sexo[]={'F','M','M','M','M','M'};
    float sueldosBruto[]={1000,2000,3000,4000,5000,6000};

    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldosBruto[i];
        lista[i].sueldoNeto = sueldosBruto[i] * 0.85;
        lista[i].estado = OCUPADO;

    }




}
void modificar(eEmpleado lista[], int tam, int legajo)
{

    int i;
    int loEncontro = 0;
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    for(i=0; i<tam; i++)
    {
        if(legajo == lista[i].legajo)
        {

            printf("Ingrese un nuevo sueldo bruto: ");
            scanf("%f", &lista[i].sueldoBruto);

            lista[i].sueldoNeto = lista[i].sueldoBruto*0.85;


            loEncontro = 1;
            break;//modifcar
        }

    }

    if(loEncontro==0)
    {
        printf("El dato no existe");
    }





}

void borrarEmpleado(eEmpleado lista[], int tam, int legajo)
{

    int i;
    int loEncontro = 0;
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    for(i=0; i<tam; i++)
    {
        if(legajo == lista[i].legajo)
        {

           lista[i].estado = LIBRE;


            loEncontro = 1;
            break;//modifcar
        }

    }

    if(loEncontro==0)
    {
        printf("El dato no existe");
    }

}




int buscarLegajo(eEmpleado lista[], int tam, int legajo)
{

}


