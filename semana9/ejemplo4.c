#include<stdio.h>

void cuadrado(float h);

int main(){
float x;
printf("Introduce un numero\n");
scanf("%f", &x);
cuadrado(x);
return 0;
}

void cuadrado(float h){
float x2;
x2 = h * h;
printf("El cuadrado del numero es: %f\n", x2);
}
