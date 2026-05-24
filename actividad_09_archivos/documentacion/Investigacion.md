**Gestión de archivos**

En C, puedes crear, abrir, leer y escribir archivos declarando un puntero de tipo FILE y utilizando la funcion fopen() de la siguiente manera:
```
FILE *fptr;
fptr = fopen(filename, mode);
```

FILE es básicamente el tipo de dato y necesitamos crear una variable de puntero para trabajar con él ( fptr). 
Para abrir un archivo, utilizamos fopen() la cual necesita 2 parámetros:

- El nombre del archivo (filename.txt)
- El modo en el que lo deseamos abrir ("w", "a", "r")

En el siguiente ejemplo:
```
FILE *fptr;

// Create a file
fptr = fopen("filename.txt", "w");

// Close the file
fclose(fptr);
```

Se abre el archivo en el modo "w", el cual sirve para escribir en el archivo y, si el archivo con el filename no existe, este lo creará.
Y el fclose() del ejemplo es muy importante cada que utilizemos los archivos ya que este cerrará el archivo cuando hayamos terminado de usarlo.

Se considera una buena práctica porque garantiza que:

- Los cambios se guardan correctamente.
- Otros programas pueden usar el archivo (si lo desea).
- Limpiar espacio de memoria innecesario.

