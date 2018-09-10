#include<stdio.h>

int main(){

int e, i, h, x, d=0;
int un=0, os=0, tre=0, cua=0, cin=0, six=0, sev=0, oc=0, ni=0;
float p;
printf("¡Hola mundo!, este es un programa que solicita informacion sobre los estudiantes\nIntroduce el numero de estudiantes\n");

int edad[e], sexo[e], sem[e];
float prom[e];
scanf("%i", &e);

printf("Introduce ahora la edad, el sexo, (0)hombre, (1)mujer, semestre (1-9) y promedio de la carreara\n");

for(i=0; i<e; i++){
printf("Edad: \n");
scanf("%i",&edad[i]);
d  = (d + edad[i])/e; 

printf("Sexo: \n");
scanf("%i",&sexo[i]);
x = x + sexo[i];

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

printf("Promedio: \n");
scanf("%f",&prom[i]);
p = (p + prom[i])/e;
}

h = e - x;
printf("Se capturaron %i alumnos de los cuales %i son mujeres y %i son hombres\n", e, x, h);
printf("La edad promedio de los alumnos es %i", d);
printf("El numero de estudiantes por semestre es: \n Primero: %i\n Segundo: %i\n Tercero: %i\n Cuarto: %i\n Quinto: %i\n Sexto: %i\n Septimo: %i\n Octavo: %i\n Noveno: %i\n", un, os, tre, cua, cin, six, sev, oc, ni);




return 0;









}
