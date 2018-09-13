
#include <stdio.h>
#include <math.h>

int main(){

FILE *res;
//Se declara una variable llamda res, para poder escribir en un archivo

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

res = fopen("resul3.txt","w"); //Los resultados se van a guardar en un archivo llamado resul3.txt, todos se imprimiran ahi

//Se utiliza un ciclo for que esta limitado desde el valor inicial de x
for (i=0; i<=in; i++){
e = exp(x);
l = log(x);
s = sin(x);
c = cos(x);
r = sqrt(x);

//En lugar de imprimir los archivos en la pantalla se imprimen en un archivo, lo unico que se tiene que hacer es usar fprintf y la varialble res que se declaro previamente.

//Como se esta en un ciclo for, se imprimira una fila de resultados, tantos como los indique al principio el usuario

fprintf(res, "Exp(%f) = %f\n",x,e);
fprintf(res, "Log(%f) = %f\n",x,l);
fprintf(res, "Sen(%f) = %f\n",x,s);
fprintf(res, "Cos(%f) = %f\n",x,c);
fprintf(res, "Raiz cuadrada(%f) = %f\n",x,r);
fprintf(res, "Los resultados con x = %f\n",x);
//Se hacen las operaciones y se imprimen los resultados de cada iteracion en el archivo resul3.txt
x= (x+es);
//La variable 'es' es el espaciado entre cada valor de x
if (x>in){
return 0;
}
//Cuando x vale mas que in, automaticamente se sale del ciclo, esto para resolver algunos casos especiales de x
}

fclose(res); //Finalmente se cierra la variable res, y termina el programa

return 0;


}
