**Estructuras y Uniones**

- Estructuras

La estructuras (o struct) se utilizan para introducir un nuevo tipo compuesto por un grupo de otros tipos. El nuevo tipo de estructura se puede utilizar como el tipo para las matrices y variables de D, lo que permite definir grupos de variables relacionadas con un único nombre.

Su sintaxis es la siguiente:
```
struct struct_name {
  data_type member1;
  data_type member2;
  ...
  data_type memberN;
};
```

Por ejemplo:
```
struct Alumno{
    char nombre[20];
    int cali;
    int actividades;
};
```
En el que "Alumno" Se convertirá en el tipo de dato, que "contiene" de cierta forna el char del nombre y los int de la calificación y las actividades.

También es muy importante mencionar que, al definir una variable struct se guarda en la memoria suficiente espacio para esta; por eso en el ejemplo anterior de guardaran 28 bytes (20 del char, 4 de cada entero), ya que se asigna memoria para cada miembro de la estructura.

Para acceder a la estructura, debe crear una variable que la represente.
Y para eso utilizamos la struct dentro del main(), seguida del nombre de la estructura y luego el nombre de la variable de la estructura:
```
struct Alumno{
    char nombre[20];
    int cali;
    int actividades;
};
int main(){
    struct Alumno Juan;
    return 0;
}
```
Y para acceder a algun miembro dentro de la estructura (Como a la calificación) se utiliza la sintaxis punto (.):
```
struct Alumno{
    char nombre[20];
    int cali;
    int actividades;
};
int main(){
    struct Alumno Juan;

    Juan.nombre = "Juan Rulfo";
    Juan.cali = 83;
    Juan.actividades = 13;

    return 0;
}
```
- Uniones

Una unión es un tipo de dato definido por el usuario que permite almacenar diferentes tipos de datos en la misma ubicación de memoria. A diferencia de las estructuras , que asignan memoria independiente para cada miembro, una unión utiliza el mismo bloque de memoria para todos sus miembros.

Su sintaxis es igual a la de struct:
```
union union_name {
  data_type member1;
  data_type member2;
  ...
  data_type memberN;
};
```

- Diferencias

Struct: Asigna espacio independiente para cada miembro, todos los miembros pueden contener valores simultáneamente, adecuado cuando se necesita almacenar todos los campos de datos, almacena todos los datos sin sobrescribirlos, utiliza más memoria ya que existen todos los miembros.

Union: Comparte recuerdos entre los miembros, solo un miembro posee un valor a la vez, adecuado para operaciones que requieren un uso eficiente de la memoria, solo se conserva el último valor asignado, utiliza menos memoria ya que solo un miembro está activo. 
