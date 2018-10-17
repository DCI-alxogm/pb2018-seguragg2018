#include<stdio.h>

//En este programa la funcion cuadrado se ejecuta, es una funcion void, no tiene entrada ni salida, todo se realiza en este codigo

void cuadrado(){
float x, x2; //Se declaran las variables
printf("Introduce el numero\n");
scanf("%f", &x); //Se escanea el numero
x2=x*x; //Se realizan los calculos
printf("El cuadrado de %f, es: %f\n", x, x2); //Se imprime el resultado
}
