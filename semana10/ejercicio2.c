#include<stdio.h>
#include<stdlib.h>

//Se declaran las funciones que se van a usar en el programa, ambas tienen entrada en este programa
void cuadrado(float h); 
float tre(float h); 


int main(int argc, char *argv[]){
//Se declara un apuntador para guardar elementos en la memoria al momento de compilar el programa

//Se declaran las variavles que se usaran
int num;
float n2, n4, r4;

//El programa realiza f(x)=x² o f(x)=x³, el usuario elige cual de las dos hara mediante un condicional
printf("El programa que estas ejecutando es: %s\n", argv[0]);
printf("Este es un programa que evalua algunas funciones\n");
printf("Introduce (1), si deseas f(x)=x²\n");
printf("Introduce (2), si deseas f(x)=x³\n");

scanf("%i", &num); //Se escanea el condicional

if (num==1){ 
n2 = atof(argv[1]); //Se iguala la variable n2 al valor del apuntador en el lugar 1, y tambien con al comando atof se cambia de ser una variable tipo char, a una tipo float
cuadrado(n2); //Se manda llamar a la funcion cuadrado, que tiene entrada pero no salida
}


if (num==2){ 
n4 = atof(argv[1]); //Se iguala la variable n4 al valor del apuntador en el lugar 1, y se transforma el valor de ser char a float
r4=tre(n4); //Se manda llamar a la funcion tre
printf("f(%f)=x³ es igual a: %f\n",n4, r4); //La funcion tre arroja un resultado como r4 y ese resultado se imprime
}

//Las funciones estan escritas en otro programa llamado ejerciciof2.c

return 0;
}
