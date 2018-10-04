#include<stdio.h>

int main() {

//Primero declaramos las variables
int var = 20; 
int *ip; //Declaramos una variable entera tipo apuntador
ip = &var; //Asignamos la direccion del apuntador a la variable 

printf("La direccion de la variable var es: %x\n", (int) &var ); 
//Se imprime la direccion de la variable
printf("Direccion guardada en el apuntador ip: %x\n", (int) ip );
//Se imprime la direccion del apuntador que es el mismo que el de la variable
printf("El valor de *ip: %d\n", *ip);
//S imprime el valor del apuntador
return 0;

}
