#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tab[5][5];
    char name[20];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j ++){
            tab[i][j] = '~';
        }
    }

    tab[1][2] = 'B';
    tab[3][4] = 'X';
    tab[2][1] = 'o';


    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j ++){
            printf("%c ", tab[i][j]);
        }
        printf("\n");
    }

    printf("Escriba su nombre: ");
    scanf("%s", &name);

    FILE *archivo;
    archivo = fopen("tableroooo.txt", "w");


    fputs(name, archivo);
    fprintf(archivo, "\nValentina\n");

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j ++){
            fprintf(archivo, "%c ", tab[i][j]);
        }
        fprintf(archivo, "\n");
    }

    fprintf(archivo, "Valentina\n");
    fprintf(archivo, "%s\n", name);
    printf("\n---Se cierra en archivo---\n");
    fclose(archivo);


    return 0;
}
