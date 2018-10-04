#include<stdio.h>
#include<stdlib.h>

int main(){

//Se declaran las variables
int *ptr, i, n1, n2; //Se declara un apuntador tipo entero

//Se introduce el primer valor del numero de elementos
printf("Introduce el numero de elementos n1: \n");
scanf("%i", &n1);
//Se introduce el segundo valor del numero de elementos
printf("Introduce el nuevo numero de elementos n2: \n");
scanf("%i", &n2);

ptr = (int*) malloc(n1 * sizeof(int)); //Se reserva la memoria de tamaño int x n1

printf("Direccion de la memoria reservada: \n");

for(i=0;i<n1; i++){
printf("%x\t", ptr + i);
//Se imprime las direcciones de la memoria n1, utilizando un for
}
ptr = realloc(ptr, n2); //Se hace un ajuste en la memoria hasta n2

for(i=0;i<n2;i++){

printf("%u\t", ptr + i);
//Se imprimen los nuevos valores de la memoria
}

printf("\n");//Imprimi este salto de linea para que quedara bien en el compilador el programa
free(ptr); //Se limpia la memoria
return 0;

} 
