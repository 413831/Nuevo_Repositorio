#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroEntero = 10;
    short numeroShort = 200;
    long numeroLong = 10000;
    float numeroFloat = 10.5f;
    double numeroDouble = 100.7;
   //unsigned int = 10;
   //unsigned long = 100;
   //unsigned short = 200;
    char letra = 'a';
    // Otros datos
    //void desconocido;

    printf("Numero entero : %i \n",numeroEntero);
    printf("Numero entero : %d \n",numeroEntero);
    printf("Numero short : %d \n",numeroShort);
    printf("Numero float : %f \n",numeroFloat);
    printf("Numero float : %.2f \n",numeroFloat);
    printf("Numero long: %ld \n",numeroLong);
    printf("Numero long : %li \n",numeroLong);
    printf("Numero double : %lf \n",numeroDouble);
    printf("Char : %c \n",letra);
    printf("------------------\n");
    printf("%i %c \n",numeroEntero, letra);
    printf("%x %x \n",&numeroEntero, &letra);
    printf("%i \n", letra);
    printf("%i \t %i \n", letra, letra);
    printf("%i \b %i \n", letra, letra);
    printf("%c \0 %c", letra, letra);

    return 0;
}
