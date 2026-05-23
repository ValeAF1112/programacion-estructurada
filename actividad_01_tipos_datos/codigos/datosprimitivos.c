#include <stdio.h>

int main()
{
    int a = 3333;
    char b = 'c';
    short c = 13;
    long d = 123456789;
    long long e = 123456789123456789;
    float f = 5.56;
    double g = 3.1415926535897932;

    printf("%i Es un numero Entero\n", a);
    printf("El Entero a utiliza %i Bytes \n", sizeof a);
    printf("La direccion de memoria es: %i\n", &a);

    printf("\n%c Es un caracter\n", b);
    printf("El caracter utiliza %i Bytes \n", sizeof b);
    printf("La direccion de memoria es: %i \n", &b);

    printf("\n%i Es un Short", c);
    printf("\nEl Short utiliza %i Bytes \n", sizeof c);
    printf("La direccion de memoria es: %i \n", &c);

    printf("\n%ld Es un Long", d);
    printf("\nEl Long utiliza %i Bytes \n", sizeof d);
    printf("La direccion de memoria es: %i \n", &d);

    printf("\n%lld Es un long long", e);
    printf("\nEl long long utiliza %i Bytes \n", sizeof e);
    printf("La direccion de memoria es: %i \n", &e);

    printf("\n%.2f Es un flotante", f);
    printf("\nEl flotante utiliza %i Bytes \n", sizeof f);
    printf("La direccion de memoria es: %i \n", &f);

    printf("\n%f Es un Double", g);
    printf("\nEl double utiliza %i Bytes \n", sizeof g);
    printf("La direccion de memoria es: %i \n", &g);


    return 0;
}
