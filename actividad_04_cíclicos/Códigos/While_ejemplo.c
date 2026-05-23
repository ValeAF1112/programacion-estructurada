#include <stdio.h>

int main () {

    int x;
    int suma = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &x);

    while (x != 0){
        suma += x;
        printf("%d\n", suma);
        printf("Ingrese un numero: ");
        scanf("%d", &x);

    }


    return 0;
}
