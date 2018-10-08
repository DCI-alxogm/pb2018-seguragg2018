//Programa creado por Guillermo Segura Gomez
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

//Primero declaramos las variables
int cont; //Utilizamos una variable entera para el contador
float *fp, sum, des=0; //Utilizamos variables tipo flotantes para determinar los calculos
char var[40]; //Utilizamos un arreglo de caracteres para leer las lineas de la base de datos

//Abrimos una variable de lectura 
FILE *l;
l = fopen("promedio.txt", "r");
while (fgets(var, 40, l)!=NULL){ //Leemos la cantidad de lineas del archivo utilizando un ciclo while y un contador cont 
//Mediante la variable fgets, checamos si hay una linea de codigo sumas al contador, si no, termina el ciclo
cont ++;
}
fclose(l);

//Abrimos una nueva variable de lectura pero esta vez para leer los datos
FILE *lec;
lec = fopen("promedio.txt", "r");
fp = (float*) malloc(cont*sizeof(float));

//Hacemos un ciclo for, de 0 hasta cont
for (int i=0; i<cont; i++){
fscanf(lec, "%f", fp + i);
sum = sum + *(fp + i); //Guardamos la suma de los datos en una variable sum

}
fclose(lec);

//Calculamos el promedio dividiendo la suma entre el numero total de datos
sum = sum/cont;

//Calculamos la desviacion standar, sumando los datos menos el promedio elevando la diferencia al cuadrado
for (int i=0; i<cont; i++){
des = des + pow((*(fp + i)-sum),2);
}

des = des/cont;
des = sqrt(des);

//LImpiamos la memoria
free (fp);

//Se imprimen los resultados
printf("Total de datos: %i\n", cont);
printf("El promedio total es igual a: %f\n", sum);
printf("La desviacion standar es igual a: %f\n", des);


return 0;
}
