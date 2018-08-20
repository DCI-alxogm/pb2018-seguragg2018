/* Creado el 17 de agosto by Guillermo Segura Gomez*/

#include<stdio.h>

int main ()


{
float a, b, c, d, u, d2, t, cu;

printf("Hola, este es un programa que hace operacions aritmeticas\n");
printf("Introduce cuatro numeros\n");
scanf ("%e",&a);
scanf ("%e",&b);
scanf ("%e",&c);
scanf ("%e", &d);

u = (a+b)*c/d;
d2 = ((a+b)*c)/d;
t = (a+b)*c/d;
cu = a + (b*c) /d;
printf("Los resultados de las operaciones son: \n");
printf("\n%e",u);
printf("\n%e",d2);
printf("\n%e",t);
printf("\n%e",cu);
printf("\n");

return 0;



}
