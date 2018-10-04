#include<stdio.h>
#include<stdlib.h>

int main (){

int num, i, *ptr, sum = 0;

ptr = (int*)  malloc(num * sizeof(int));

printf("Introduce el numero de elementos: \n");
scanf("%i",&num);

if (ptr == NULL)
{
	printf("Error: Memoria no reservada");
	exit(0);
}

printf("Introduce el numero de elementos del arreglo: \n");

for(i=0; i < num; i++){

scanf("%i", ptr + i);
sum = sum + *(ptr+i);


}

printf("Suma = %d\n", sum);
free(ptr);
return 0;
}
