#include<stdio.h>

//Se declara la funcion afuera de la funcion main
float cuadrado();
//Este tipo de funcion no tiene entrada, pero si tiene argumentos de salida

int main(){
float x2; //Se declara una variable para la salida
x2 = cuadrado(); //Se manda llamar a la funcion y se iguala a la variable x2
printf("El cuadrado de la funcion es %f\n", x2); //Se imprimen resultados

}

float cuadrado(){
float x; //Se declara una variable para la entrada
printf("Introduce un numero\n");
scanf("%f", &x); //Se introduce el numero
return x*x; //Se arrojan el resultado hacia la funcion main
}
