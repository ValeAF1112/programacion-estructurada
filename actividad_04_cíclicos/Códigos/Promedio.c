#include <stdio.h>

int main()
{
    int N, opcion = 1;
    float calif, prom, suma;


    while( opcion != 2){

        printf("Ingrese el numero de materias que ingresara: ");
        scanf("%i", &N);

        for(int i = 1; i <= N; i ++){
            printf("\nIngrese la calificacion numero %i, sobre 100: ", i);
            scanf("%f", &calif);

            while(calif < 0 || calif > 100){
                printf("\nEsa calificacion no es valida, ingrese otra:");
                scanf("%f", &calif);
            }

            suma += calif;
    }

    prom = suma / N;
    printf("Su promedio es de: %.2f\n", prom);

    printf("\nIngrese: \n");
    printf("1. Para calcular otro promedio. \n");
    printf("2. Para salir del programa. \n");
    scanf("%i", &opcion);

    }
    return 0;
}
