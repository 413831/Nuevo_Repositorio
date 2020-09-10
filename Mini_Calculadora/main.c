#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int resultado;
    char operacion;

    printf("Seleccione la operacion : suma (+), resta (-), multiplicacion (*), division (/): \n");
    scanf("%c",&operacion);
    printf("Ingrese los números a operar\n");
    scanf("%d", &numeroUno);
    scanf("%d", &numeroDos);
    printf("%d %c %d = ", numeroUno, operacion, numeroDos);

    switch(operacion)
    {
        case '+' :
            resultado = numeroUno + numeroDos;
            break;
        case '-' :
            resultado = numeroUno - numeroDos;
            break;
        case '*' :
            resultado = numeroUno * numeroDos;
            break;
        case '/' :
            if(numeroDos > 0)
            {
                resultado = numeroUno / numeroDos;
            }
            break;
        default :
            printf("Operacion invalida");
    }

    printf("%d", resultado);


    return 0;
}
