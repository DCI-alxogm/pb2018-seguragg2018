#include<stdio.h>

int main(){

FILE *lec;
lec = fopen("base.txt", "r");
//Abre un archivo llamado base.txt, y se declara una variable llamada lec, para leer los archivos de la base

int i, h, x=0, n; //Se declaran los contadores enteros

//Se lee la primer linea del archivo, que te dice cual es el numero de alumnos de la base
fscanf(lec, "%i", &n);

//Se declaran las variables
int un=0, os=0, tre=0, cua=0, cin=0, six=0, sev=0, oc=0, ni=0; //Estas se usan para determinar el semestre en el que se esta
float p=0, d=0; //Estas se usan para determinar el promedio y la edad promedio
int edad[n], sexo[n], sem[n];
float prom[n];
//Se declara un arrreglo para cada tipo de dato


//Se usa un for, se leen los datos y se van guardando en arreglos
for(i=0; i<n; i++){
fscanf(lec, "%i %i %i %f", &edad[i], &sexo[i], &sem[i], &prom[i]);

d = edad[i]+d; 
//Se guarda la edad en edad[i] y se usa d, para sumar el total de las edades

x = x + sexo[i];
//Para calcular el sexo, se usa 1 para las mujeres y 0 para los hombres, usamos la variable x para sumar todos los valores de x, y despues se le restan al total de estudiantes donde x = total de mujeres y e - x = total de hombres


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


p = p + prom[i];
//El promedio suma todos los valores ingresados en una variable p
}

fclose(lec); //Aqui termina la parte de lectura del archivo, las variables ya tienen valores ahora solo se tienen que hacer calculos e imprimir los resultados

h = n - x; //Calculo del numero de hombres
d = d/n; //Calculo de la edad promedio
p = p/n; //Calculo del promedio

//Se declara una nueva variable para escribir
FILE *re;
re = fopen("resultados.txt", "w"); //Se escribe en un archivo llamado resultados.txt

//Se escriben los resultados utilizando fprintf

fprintf(re, "Se capturaron %i alumnos de los cuales %i son mujeres y %i son hombres\n", n, x, h);
fprintf(re, "La edad promedio de los alumnos es %f\n", d);
fprintf(re, "El numero de estudiantes por semestre es: \n Primero: %i\n Segundo: %i\n Tercero: %i\n Cuarto: %i\n Quinto: %i\n Sexto: %i\n Septimo: %i\n Octavo: %i\n Noveno: %i\n", un, os, tre, cua, cin, six, sev, oc, ni);
fprintf(re, "El promedio de calificaciones de todos los estudiantes es: %f\n", p);

fclose(re);
//Finalmente se cierra la parte de escritura del archivo y termina el programa


return 0;








}
