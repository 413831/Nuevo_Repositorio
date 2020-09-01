#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING 40

int main()
{
    // Declaracion de variables
    int numeroUno;
    int numeroDos;
    int resultado;
    float numeroFloat;
    char nombre[MAX_STRING];
    int opcion;

    printf("Escriba su nombre \n");
    scanf("%s", nombre);
    printf("%s \n", nombre);
    printf("Elija opcion");

    switch(opcion)
    {
        case 1 :
            // Sumar
            resultado = numeroUno + numeroDos;
            break;
    }
    printf("%d", resultado);

    // Asignacion o inicializacion
    printf("Ingrese dos numeros para sumar \n");
    scanf("%d",&numeroUno);
    scanf("%d",&numeroDos);

    printf("Ingrese numero float \n");
    scanf("%f",&numeroFloat);
    printf("%f", numeroFloat);

    // Operacion
    resultado = numeroUno + numeroDos;

    printf("El resultado es : %d", resultado);

    return 0;
}

