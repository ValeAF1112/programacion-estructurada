**Estructuras de control cíclicas**

Las estructuras cíclicas; tambien llamadas de repetición, iterativas o de bucles. Son estructuras que nos permiten ejecutar un conjunto de instrucciones de manera repetida (o cíclica), mientras que una expresión lógica evalúa que se cumpla, es decir, que sea verdadera.

En lenguaje C existen tres estructuras de repetición: 
- While:
Esta se utiliza para generar ciclos, en los cuales un grupo de instrucciones se ejecuta de forma repetida, hasta que se satisface alguna condición.
  ```
  while(condicion){
    instrucciones;
    i++ o i--;
  }
  ```
- do while:
Cuando se construye un ciclo utilizando la instrucción while, la comprobación para la continuación del ciclo se realiza al comienzo de cada ciclo o iteración; sin embargo, a veces es deseable disponer de un ciclo en el que se realice la comprobación al final de cada iteración.
Esta estructura ejecuta el bloque de código que se necesita y después revisa la condición y siempre se ejecuta al menos 1 vez.
```
do{
instrucciones;
i++ o i--;
}while(condicion);
```
- for:
El for es una estructura de control la cual permite realizar repeticiones cuando se conoce el número de elementos que se quiere recorrer.

La instrucción for es probablemente la más frecuentemente usada de las instrucciones para crear ciclos en C. Esta instrucción incluye una expresión que especifica el valor inicial de un índice, otra expresión que determina si se continúa o no el ciclo y una tercera expresión que permite que el índice se modifique al final de cada iteración o ciclo.
```
for(condicion; i++ o i--;){
  instrucciones;
}
```
