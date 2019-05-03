#include <stdio.h>

#define LIBRE 0
#define OCUPADO 1
typedef struct
{
    char descripcion[20];
    float valorHora;
}eSector;

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;

    eSector sector;

    float sueldoBruto;
    float sueldoNeto;
    int estado;
} eEmpleado;

void mostrarEmpleado(eEmpleado);
void cargarEmpleado(eEmpleado[], int);
void mostrarListaEmpleados(eEmpleado[], int);

int buscarLibre(eEmpleado[], int);
void inicializarEmpleados(eEmpleado[], int);
void hardcodearDatosEmpleados(eEmpleado[], int);
void modificar(eEmpleado[], int, int);
int buscarLegajo(eEmpleado[], int, int);
void borrarEmpleado(eEmpleado[], int, int);





