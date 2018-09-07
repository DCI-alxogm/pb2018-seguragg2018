#include <stdio.h>
#include <math.h>

int main(){

//Para las fucniones se utlizan variables del tipo float
//Para los contadores, los valores iniciales y finales, utilizamos variables enteras
float e, l, s, c, r, x;
int i, in, es;

//Se utilizan intervalos, se pone un limite para los valores de x
printf("¡Hola!, este es un programa que evalua algunas funciones, en un intervalo, y con un espaciado\n");
printf("Selecciona el valor de inicial de x\n");
scanf("%f", &x);
printf("Selecciona el intervalo, el valor maximo de x\n");
scanf("%i",&in);
printf("Selecciona el espaciado entre cada valor de x\n");
scanf("%i",&es);

//Se utiliza un ciclo for que esta limitado desde el valor inicial de x
for (i=0; i<=in; i++){
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
//Se hacen las operaciones y se imprimen los resultados de cada iteracion
x= (x+es);
//La variable 'es' es el espaciado entre cada valor de x
if (x>in){
return 0;
}
//Cuando x vale mas que in, automaticamente se sale del ciclo, esto para resolver algunos casos especiales de x
}

return 0;


}
