#include <stdio.h>

int main(){

    int A = 10, B = 2, C = 2, D;

    printf("Operadores aritmeticos: 10 + 2 / 2 = %i", A + B / C);
    printf("\nOperadores de asignacion: 10 -= 2 =%i\n", A -= C);
    printf("Operadores de incremento y decremento: 10++ = %i, ++2 = %i\n", A++, ++B);
    printf("Operadores logicos: %i, %i\n", A || B, A | B);
    D = A < B? 1:0;
    printf("Operador ternario(?): %i", D);


return 0;
}
