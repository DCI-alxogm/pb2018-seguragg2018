#include<stdio.h>
#include<stdlib.h>

int main(){

int *ptr, i, n1, n2;
printf("Introduce el numero de elementos n1: \n");
scanf("%i", &n1);
printf("Introduce el nuevo numero de elementos n2: \n");
scanf("%i", &n2);
ptr = (int*) malloc(n1 * sizeof(int));

printf("Direccion de la memoria reservada: \n");

for(i=0;i<n1; i++){
printf("%x\t", ptr + i);

}
ptr = realloc(ptr, n2);

for(i=0;i<n2;i++){

printf("%u\t", ptr + i);

}
printf("\n");
free(ptr);
return 0;

} 
