#include<stdio.h>
#include<stdlib.h>

int main() {

//Se declaran las variables
int num, i, *ptr, sum = 0; //Se declara un apuntador tipo entero

//Se introduce el valor de la variable sum
printf("Introduce el numero de elementos\n");
scanf("%i", &num);

ptr = (int*) calloc(num, sizeof(int)); //Se reserva la memoria en bloques

//Si el apuntador no tiene direccion termina el programa
if(ptr == NULL){
	printf("Error: memoria no reservada");
	exit(0);
}

//Se introducen los elementos adentro del for
printf("Introduce los elementos del arreglo: \n");

for(i=0;i<num;i++){

	scanf("%i", ptr + i); //los elementos se guardan en los diferentes espacios de la memoria
	sum = sum + *(ptr + i); //Se suman los valores de los espacios de la memoria en la variable sum

}

//Se imprime el valor de la suma
printf("Suma = %i\n", sum);

//Se libera la memoria
free(ptr);
return 0;



}
