#include<stdio.h>
#include<stdlib.h>

int main() {

int num, i, *ptr, sum = 0;

printf("Introduce el numero de elementos\n");
scanf("%i", &num);

ptr = (int*) calloc(num, sizeof(int));

if(ptr == NULL){
	printf("Error: memoria no reservada");
	exit(0);
}

printf("Introduce los elementos del arreglo: \n");

for(i=0;i<num;i++){

	scanf("%i", ptr + i);
	sum = sum + *(ptr + i);

}

printf("Suma = %i\n", sum);
free(ptr);
return 0;



}
