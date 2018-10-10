#include<stdio.h>

//Se declara la funcion afuera de la funcion main
void cuadrado(float h); 
//Este tipo de funcion tiene entrada, pero no salida

int main(){
float x; //Se declara la variable que se usara para la entrada
printf("Introduce un numero\n");
scanf("%f", &x); //Se escanea el numero
cuadrado(x);//Se llama la funcion y se hace sobre el numero escaneado
return 0;
}

void cuadrado(float h){
float x2; //Se define una nueva variable para la salida, pero la salida sera dentro de la misma funcion, no tiene salida hacia la funcion main
x2 = h * h;//Se hacen las operaciones
printf("El cuadrado del numero es: %f\n", x2); //Se imprimen resultados
}
