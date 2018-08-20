/*Creado el 20 de agosto de 2018 by Guillermo Segura*/

#include<stdio.h>

int main() {

/*Primero, declaramos las variables*/
char a;
float m, r;

printf("¡Hola!, este es un programa que convierte grados C° a F° y viceversa\n");
printf("Escribe F si quieres convertir de F° a C°\n");
printf("Escribe C si quieres convertir de C° a F°\n");
/* Escribes F o C, para indicar de que grados quieres convertir*/

scanf("%c",&a);

/* Usamos un if, para indicar si nos aisgnaron un valor hacer una operacion u otra*/
if (a=='F'){
printf("\nEscribe la cantidad de grados F°\n");
scanf ("%f",&m);
r= (m-32)/1.8;
printf("El resultado es; %f",r);
printf(" grados Centrigrados\n");
return 0;


}

if (a=='C'){
printf("\nEscribe la cantidad de grados C°\n");
scanf ("%f",&m);
r= (m*1.8)+32;
printf("El resultado es; %f",r);
printf(" grados Farenheit\n");
return 0;
}
/* Al final da el resultado*/

}

