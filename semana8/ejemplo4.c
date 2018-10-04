#include<stdio.h>
#include<stdlib.h>

int main (){

//Se declaran las variables
int num, i, *ptr, sum = 0; //Se declara un apuntador

ptr = (int*)  malloc(num * sizeof(int)); //Se reserva la memoria con el comando malloc
//El tamaño de la memoria es la variable num x el valor de una variable entera, lo cual son 4 bytes

printf("Introduce el numero de elementos: \n");
scanf("%i",&num); //Se introduce el valor de la variable num

//Se checa, si el apuntador no esta apuntando en ninguna direccion termina el programa
if (ptr == NULL)
{
	printf("Error: Memoria no reservada");
	exit(0);
}

//Se introducen los valores
printf("Introduce los elementos del arreglo: \n");

for(i=0; i < num; i++){

scanf("%i", ptr + i); //Los valores se asignan a una direccion de la memoria
sum = sum + *(ptr+i); //Se van sumando los valores en la variable sum


}

//Se imprime la suma
printf("Suma = %d\n", sum);
free(ptr); //Se libera la memoria
return 0;
}
