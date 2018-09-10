#include<stdio.h>

int main(){


//Primero se declaran las variables
int e, i, h, x=0; //Se usan estas para los contadores, y los resultados finales
int un=0, os=0, tre=0, cua=0, cin=0, six=0, sev=0, oc=0, ni=0; //Estas se usan para determinar de que semestre son los alumnos
float p, d; //Se usan dos de tipo float para determinar la edad y el promedio
printf("¡Hola mundo!, este es un programa que solicita informacion sobre los estudiantes\nIntroduce el numero de estudiantes\n");

//Se escanea el numero de estudiantes
scanf("%i", &e);
int edad[e], sexo[e], sem[e];
float prom[e];
//Se declaran los arreglos, tres de tipo entero y uno flotante para los promedios

printf("Introduce ahora la edad, el sexo, (0)hombre, (1)mujer, semestre (1-9) y promedio de la carrera\n");

//Se hace un ciclo for, y se piden los valores y se guardan en el lugar i de cada arreglo
for(i=0; i<e; i++){
printf("Edad: \n");
scanf("%i",&edad[i]);
d  = d + edad[i]; 
//Se guarda la edad en edad[i] y se usa d, para sumar el total de las edades


printf("Sexo: \n");
scanf("%i",&sexo[i]);
x = x + sexo[i];
//Para calcular el sexo, se usa 1 para las mujeres y 0 para los hombres, usamos la variable x para sumar todos los valores de x, y despues se le restan al total de estudiantes donde x = total de mujeres y e - x = total de hombres

printf("Semestre: \n");
scanf("%i",&sem[i]);
if (sem[i]==1) un = un + 1;
if (sem[i]==2) os = os + 1;
if (sem[i]==3) tre = tre + 1;
if (sem[i]==4) cua = cua + 1;
if (sem[i]==5) cin = cin + 1;
if (sem[i]==6) six = six + 1;
if (sem[i]==7) sev = sev + 1;
if (sem[i]==8) oc = oc + 1;
if (sem[i]==9) ni = ni + 1;
//Se hacen nueve if, y nueve variables, si el numero ingresado es igual a alguno de los semestres, se le suma uno a su respecticva variable


printf("Promedio: \n");
scanf("%f",&prom[i]);
p = p + prom[i];
//El promedio suma todos los valores ingresados en una variable p
}

h = e - x; //Calculo del numero de hombres
d = d/e; //Calculo de la edad promedio
p = p/e; //Calculo del promedio

printf("Se capturaron %i alumnos de los cuales %i son mujeres y %i son hombres\n", e, x, h);
printf("La edad promedio de los alumnos es %f\n", d);
printf("El numero de estudiantes por semestre es: \n Primero: %i\n Segundo: %i\n Tercero: %i\n Cuarto: %i\n Quinto: %i\n Sexto: %i\n Septimo: %i\n Octavo: %i\n Noveno: %i\n", un, os, tre, cua, cin, six, sev, oc, ni);
printf("El promedio de calificaciones de todos los estudiantes es: %f\n", p);

//Finalmente solo se imprimen los resultados finales de todo y ya


return 0;









}
