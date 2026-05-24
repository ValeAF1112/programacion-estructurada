**Memoria dinámica**

La gestión dinámica de memoria es una parte crucial de la programación en C.
Las funciones malloc, calloc, realloc y free son fundamentales para asignar y liberar memoria en tiempo de ejecución.

- Malloc:

Malloc viene de memory allocation, su sintazis es la siguiente:
```
void* malloc(size_t size);
```
Su función es asignar un bloque de memoria de tamaño 'size' bytes. La memoria asignada no se inicializa.
suele utilizarse cuando necesitas una cantidad específica de memoria y no te importa que contenga basura inicial.

- Calloc:

Calloc viene de Contiguous Allocation.
Su sintaxis es la siguiente:
```
void* calloc(size_t num, size_t size);
```
Esta asigna un bloque de memoria para una matriz de num elementos, cada uno de size bytes, y la inicializa a cero.
Se utiliza cuando necesitas una matriz de elementos y quieres que la memoria esté inicializada a cero, es decir, nos importa que no tenga basura inicial.

- Realloc:

Realloc viene de Reallocation. Su sintaxis es la siguiente:
```
void* realloc(void* ptr, size_t size);
```
La funcion de esta es cambiar el tamaño del bloque de memoria apuntado por ptr a size bytes. La memoria nueva no se inicializa.
Suele utilizarse cuando necesitas cambiar el tamaño de un bloque de memoria previamente asignado.

- Free:

Free viene de Freeing Memory. Su sintaxis es la siguiente:
```
void free(void* ptr);
```
La función de esta es liberar un bloque de memoria previamente asignado por malloc, calloc o realloc.
Se utiliza siempre que terminas de usar un bloque de memoria dinámica para evitar fugas de memoria.
