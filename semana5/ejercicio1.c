#include <stdio.h>
#include <math.h>

int main(){

float e, l, s, c, r, x;
int i, in, es;

printf("¡Hola!, este es un programa que evalua algunas funciones, en un intervalo, y con un espaciado\n");
printf("Selecciona el valor de inicial de x\n");
scanf("%f", &x);
printf("Selecciona el intervalo, el valor maximo de x\n");
scanf("%i",&in);
printf("Selecciona el espaciado entre cada valor de x\n");
scanf("%i",&es);

for (i=1; i<=in; i++){
e = exp(x);
l = log(x);
s = sin(x);
c = cos(x);
r = sqrt(x);

printf("Exp(%f) = %f\n",x,e);
printf("Log(%f) = %f\n",x,l);
printf("Sen(%f) = %f\n",x,s);
printf("Cos(%f) = %f\n",x,c);
printf("Raiz cuadrada(%f) = %f\n",x,r);
printf("Los resultados con x = %f\n",x);

x= (x+es);

}

return 0;


}
