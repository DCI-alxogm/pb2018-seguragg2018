//Programa realizado el 22 de agosto de 2018 by Guillermo Segura

#include <stdio.h>

//Este programa es una condicional simple

int main (){

int a;
//Te pide un numero

printf("Introduce un numero\n");
scanf("%i",&a);

//Si el numero es par, se cumple con la condicion, si no no

if(a%2==0) a=a+1;
//Si es par, le sumara 1 al numero
printf("%i\n",a);
//Si no es par solo imprimira el impar tal cual, si es par imprimira el numero mas 1
return 0;

}
