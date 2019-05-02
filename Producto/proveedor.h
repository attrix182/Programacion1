#ifndef PROVEEDOR_H_INCLUDED
#define PROVEEDOR_H_INCLUDED

typedef struct
{
    int id;
    char descripcion[51];
    char localidad[51];
    int cuit;
    char dueño[51];
} eProveedor;

void inicializarProvedoores(eProveedor listaProveedores[], int cant);




//uno a muchos es un id que se repite en el uso, pero no en la declaracion de una estructura


#endif // PROVEEDOR_H_INCLUDED
