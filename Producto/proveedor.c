void inicializarProvedoores(eProveedor listaProveedores[], int cant)
{
    int i;

    int id[3]= {50, 42, 95, 52};
    char descripcion[3][50]= {"AAA", "BBB", "CCC"};
    char localidad[3][50]= {"DDD", "EEE", "FFF"};
    int cuit[3][13]= {"77951234", "77959876", "77953791"};
    char dueño[3][50]= {"22/10/2020", "10/05/2019", "15/12/2008"};

        for(i=0; i<3; i++)
    {
        listaProveedores[i].id = id[i];
        strcpy(listaProveedores[i].descripcion,descripcion[i]);
        strcpy(listaProveedores[i].localidad, localidad[i]);
        listaProveedores[i].cuit=cuit[i];
        strcpy(listaProveedores[i].dueño, localidad[i]);
        listaProveedores[i].estado = OCUPADO;
    }
}
