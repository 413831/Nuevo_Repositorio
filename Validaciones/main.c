#include <stdio.h>
#include <stdlib.h>

#define LIMITE 5

int main()
{
    // Declaracion
    int numeros[LIMITE];
    int acumulador = 0;
    int numeroMayor;
    int numeroMenor;
    double promedio = 0;
    double contador = 0;

    // Inicializacion
    printf("Ingrese %d numeros\n", LIMITE);

    for(int i = 0; i < LIMITE; i++)
    {
        scanf("%d", &numeros[i]);
        acumulador = acumulador + numeros[i];

        if(i == 0)
        {
            numeroMayor = numeros[i];
            numeroMenor = numeros[i];
        }

        if(numeros[i] > numeroMayor)
        {
            numeroMayor = numeros[i];
        }

        if(numeros[i] < numeroMenor)
        {
            numeroMenor = numeros[i];
        }
        contador = contador + 1;
    }

    // Ejecucion
        printf("%x \n", numeros);
    for(int i = 0; i < LIMITE; i++)
    {
        printf("%d \n", numeros[i]);
        printf("%x \n", &numeros[i]);
    }
    promedio = acumulador / contador;
    printf("%d \n", acumulador);
    printf("%.2lf \n", promedio);
    printf("El numero mayor es %d \n", numeroMayor);
    printf("El numero menor es %d \n", numeroMenor);


    return 0;
}
