Ejemplo1:

El ejemplo 1 es un programa que nos introduce al concepto de introducir los valores antes de que corramos el programa. Lo que se hace es que se declara en la funcion main una variable tipo entera y un apuntador de tipo char, lo que hace la variable int es contar el numero de elementos introducidos y el apuntador guarda los elementos en la memoria. Lo que hace el programa es mediante condicionales if, checa si los argumentos son necesarios para correr el programa, si no lo son manda errores, si lo son, imprime lo que se le dio al programa. 

Ejemplo 2:
El ejemplo 2 es un programa que utiliza el mismo concepto del programa anterior, la diferencia con el ejemplo1 es que a este programa le introduces el nombre de otro archivo, entonces el programa crea un archivo en donde va a imprimir los resultados en lugar de imprimirlos a la pantalla. El programa imprime "hola mundo" 100 veces. Si los argumentos introducidos son inecesarios, el programa manda errores.

Ejemplo3:
El ejemplo 3 es un programa que utiliza el mismo concepto que sus predecesores. El programa crea un archivo con el nombre previamente introducido, pero lo que hace diferente este programa es que mediante el argumento atof, convierte los valores del apuntador tipo char, a valores tipo float, y lo mismo con atoi, que convierte los valores a tipo int. El programa imprme estos valores en un archivo y si los argumentos son inecesarios marca error.

Ejercicio:
El ejercicio es un programa que evalua coordenadas x, y , z, con un determinado espaciado un numero de veces. De igual manera los argumentos se introducen al momento de correr el programa y se guardan en un apuntador. El programa utiliza el argumento atof, y atoi para convertir los valores a float e int, y despues con un for, realiza los calculos y los imprime en un archivo tambien introducido previamente. Si los argumentos son inecesarios el programa manda error.

Funciones:
El programa funciones es un programa que nos introduce al concepto de utilizar dos codigos distintos para un solo programa; se escriben dos codigos diferentes y se crea un solo archivo ejecutable para los dos, de la forma: "funciones.c funciones_2.c -o funciones.o". Lo que hace el primer codigo es declarar la funcion y en la funcion main, llamar la funcion. En el segundo codigo se realiza la funcion. La funcion es de tipo void, por lo que no tiene entrada ni salida y todo se realiza en ese codigo. Finalmente despues de ejecutarse la funcion, regresa al primer codigo en donde finaliza el programa y listo.

Ejercicio2:
El ejercicio 2 es un programa que combina los dos conceptos anteriores, el de escribir dos codigos y el de introducir los valores al momento de correr el programa. Lo que hace el programa es evaluar las funciones f(x)=x² y f(x)=x³. Se utilizan funciones que tengan entrada en el primer codigo, pues si no tienen entrada el valor introducido cuando se corre el programa no funcionaria en el segundo codigo. En la funcion main, se declara un apuntador de caracteres para leer el numero que sera evaluado en la funcion. Despues se le pregunta al usuario cual de las dos funciones quiere evaluar, y mediante un condicional el programa ejecuta la funcion que quiera el usuario. Para que el valor sea tipo flotante se ejecuta el argumento atof(argv[1]), argv[1] es el lugar donde se guardo el numero en la memoria, pues en el lugar 0 se guardo el nombre del programa que se esta ejecutando. Se iguala el valor de una variable, al valor del numero, y se ejecutan las dos funciones con esa variable. Una funcion es de tipo con entrada, sin salida y la otra es de tipo con entrada y con salida. Finalmente se imprimen los resultados y listo