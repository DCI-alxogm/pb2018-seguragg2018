#include<stdio.h>

float cuadrado();

int main(){
float x2;
x2 = cuadrado();
printf("El cuadrado de la funcion es %f\n", x2);

}

float cuadrado(){
float x;
printf("Introduce un numero\n");
scanf("%f", &x);
return x*x;
}
