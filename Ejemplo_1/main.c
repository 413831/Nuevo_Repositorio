#include <stdio.h>

/*
 * Estructura de un programa en C
 * Tipos de datos
 */

// Funcion principal de programa en C
int main() {
    // Declaracion de variables en formato lowerCamelCase
    int numero = 5;
    long numeroGrande = 3000000;
    float flotante = 1.5555;
    double doblePrecision = 1234.12345;
    char letra = 'a';

    printf("Numero entero %i",numero);
    printf("\nNumero long %l",numeroGrande);
    printf("\nNumero float %f",flotante);
    printf("\nNumero de doble precision %lf",doblePrecision);
    printf("\nCaracter %c",letra);

    // Retorno de tipo int, 0 = exito, -1 = error
    return 0;
}
