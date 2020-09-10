#include <stdio.h>
#include <stdlib.h>
#include "matematica.h"

/*
    Funciones:
    Sumar, restar, multiplicar, dividir, potencia, raiz
    promedio, numeromayor, numeromenor, total
*/

int saludar(char nombre[]);


int main()
{
    char nombre[30] = "Pepito";
    int numeroUno;
    int numeroDos;
    int resultado;

    printf("Ingrese dos numeros \n");
    scanf("%d", &numeroUno);
    scanf("%d", &numeroDos);

    resultado = sumar(numeroUno,numeroDos);

    printf("%d", resultado);
    return 0;
}


int saludar(char nombre[])
{
    printf("Hola %s!\n", nombre);
    return 0;
}


