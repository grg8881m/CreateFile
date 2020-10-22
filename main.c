#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Archivos! Crear un Archivo\n");

    FILE *archivo;

    archivo =  fopen("archivo001.dat", "w");

    if(archivo != NULL)
    {
        printf("El archivo se ha creado exitosamente. Comprueba en la carpeta que ha sido creado \n");
        fclose(archivo);
    }else{
        printf("El archivo no se ha creado");
    }

    return 0;
}
