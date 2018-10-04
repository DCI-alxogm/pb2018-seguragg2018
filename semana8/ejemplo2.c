#include<stdio.h>

int main (){

//Declaramos una variable tipo apuntador y le asignamos el valor nulo
int *ptr = NULL;

//Se imprime la posicion de la variable apuntador, que al ser nulo el resultado deberia de ser 0
printf("La posicion de ptr es: %x\n", ptr );
return 0;
}
