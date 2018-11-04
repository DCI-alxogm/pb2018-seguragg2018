//Se incluye <ibreria.h> que es donde estan declaradas las funciones
#include <stdio.h>
#include "libreria.h"

//Se hace la funcion en este archivo del programa

void cuadrado( ){

int c=1;

while (c==1){
	
	double x;
	printf("Este es un programa que calcula la funcion cuadratica\nIntroduce un numero\n");
	scanf("%lf", &x);
	x = x*x;
	printf("El resultado es: %f\n", x);
	printf("Presiona (1) para volver a intentarlo\nPresiona (0) para salir\n");
	scanf("%i", &c);
}


return ;
}

