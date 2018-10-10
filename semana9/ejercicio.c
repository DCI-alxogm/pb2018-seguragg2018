#include<stdio.h>
#include<math.h>

void cuadrado();
void cubo(float h);

int main(){

int num;
float n2;

printf("¡Hola!, este es un programa que realiza algunas funciones\n");
printf("Introduce (1), si deseas f(x)=x²\nIntroduce (2), si deseas f(x)=x³\n");
printf("Introduce (3), si deseas f(x)=x⁴\nIntroduce (4), si deseas f(x)=x⁵\n");

scanf("%i", &num);

if (num==1){
cuadrado();
}

if (num==2){
printf("Introduce el numero que deseas elevar al cubo\n");
scanf("%f", &n2);
cubo(n2);
}


return 0;
}

void cuadrado(){
float n1, r1;
printf("Introduce el numero que deseas elevar al cuadrado\n");
scanf("%f", &n1);
r1 = n1 * n1;
printf("f(%f)=x² es igual a: %f\n", n1, r1);

}

void cubo(float h){
float r2;
r2 = h*h*h;
printf("f(%f)=x³ es igual a: %f\n", h, r2);

}

