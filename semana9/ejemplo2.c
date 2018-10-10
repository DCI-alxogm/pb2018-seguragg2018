#include<stdio.h>

float cuadrado(float h); //Se define la funcion afuera de la funcion main
//Este tipo de funcion tiene argumento de entrada y de salida

int main(){
float x, x2; //Se usaran estas variables para la entrada y la salida de la funcion
printf("Introduce un numero\n");
scanf("%f", &x); //Se escanea el numero en el cual se hara la funcion
x2=cuadrado(x); //Se llama la funcion y se guarda el resultado en x2
printf("El cuadrado de la funcion %f, es %f\n", x, x2); //Se imprimen los resultados
return 0; //Finaliza el programa

}

float cuadrado(float h){
return h * h; //Arroja el resultado hacia la funcion main

}
