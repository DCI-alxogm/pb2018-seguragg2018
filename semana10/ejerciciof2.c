#include<stdio.h>
#include<stdlib.h>

 
void cuadrado(float h){ //El valor introducido en el programa ejercicio2.c es la variable h
float r2; //Se declara una variable para el resultado r2
r2 = h*h; //Se realiza la operacion con el valor introducido desde el programa ejercicio2.c
printf("f(%f)=x² es igual a: %f\n", h, r2); //Se imprimen los resultados

}


float tre(float h){ //Se realizan las operacioes con h 
return h*h*h; //El valor se manda de vuelta al programa ejercicio2.c
}
