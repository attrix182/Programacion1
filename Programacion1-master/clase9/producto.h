#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

typedef struct
{
    char nombre[50];
    char codigoDeBarras[13];
    char fechaDeVencimiento[50];
    char proveerdor[50];
    float precio;
} eProducto;
#endif // PRODUCTO_INCLUDED

eProducto pedirProducto();
void construirArray(int tamanio, eProducto);

