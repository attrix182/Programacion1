#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED
#define LIBRE 0
#define OCUPADO 1

typedef struct
{
  char nombre[50];
  int edad;
}ePersona;


#endif // BIBLIOTECA_H_INCLUDED

int dameUnaPersona(ePersona);
void mostrarUnaPersona(ePersona);
