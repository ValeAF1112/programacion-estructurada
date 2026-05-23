**Estructuras de control condicionales**

La estructuras de control condicionales son sentrencias de control en dónde la condición es una expresión que será evaluada y, si ésta es correcta, el bloque de código se ejecutará.
Si es falsa, el bloque de código será ignorado.

Estas estructuras nos permiten variar el flujo del programa en base a unas determinadas condiciones.
Existen distintas estructuras condicionales:
- If - else:

  
  "if (condición) sentencia1;
  
  else if (condición) sentencia2;

  else if (condición) sentencia3;

  else sentencia4;"
  
  Con esta estructura el flujo del programa únicamente entra en una de las condiciones.
  Si una de ellas se cumple, se ejecuta la sentencia correspondiente y salta hasta el final de la estructura para continuar con el programa.

- Switch:

  "switch (variable){
  
		case contenido_variable1:

			sentencias;

  			break;

  		case contenido_variable2:

  			sentencias;

  			break;

  			default:

  			sentencias;
  }"

  En esta estructura cada case puede incluir una o más sentencias sin necesidad de ir entre llaves, ya que se ejecutan todas hasta que se encuentra la sentencia BREAK. La variable evaluada sólo puede ser de tipo entero o caracter. default ejecutará las sentencias que incluya, en caso de que la opción escogida no exista.
