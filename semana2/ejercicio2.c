/*Creado el 17 de agosto de 2018 por Guillermo Segura*/

#include<stdio.h>

int main(){

int a, b, c, d, un, d2, tre, cua;

printf("Este programa hace operaciones aritmeticas\n");
printf("Introduce 4 numeros\n");
scanf("%i",&a);
scanf("%i",&b);
scanf("%i",&c);
scanf("%i",&d);
un = (a+b)*c/d;
d2 = ((a+b)*c)/d;
tre = (a+b)*c/d;
cua = a + (b*c) /d;

printf("Los resultados son: \n");
printf("\n%i",un);
printf("\n%i",d2);
printf("\n%i",tre);
printf("\n%i",cua);
printf("\n");

return 0;




}
