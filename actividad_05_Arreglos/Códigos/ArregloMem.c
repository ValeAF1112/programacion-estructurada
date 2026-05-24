#include <stdio.h>

int main(){

int num[5];

    for(int i = 0; i < 5; i++){
        printf("Ingrese un numero:");
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("%d\n", &num[i]);
        printf("%d\n", num[i]);
    }


    char nm[5];
    printf("%d\n", &nm);
    for(int i = 0; i < 5; i++){
    printf("%d\n", &nm[i]);
    }


    return 0;
}
