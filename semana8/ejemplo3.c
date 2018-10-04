#include<stdio.h>

int main(){

//Se declaran las variables

int MAX = 3;
int var [] = {10, 100, 200}; //Se declara un arreglo tipo entero de tres espacios, cuyos valores son 10, 100 y 200 respectivamente
int i, *ptr; //Se declara un apuntador tipo entero

ptr = &var; //Al apuntador tipo entero se le asigna la direccion del arreglo 

for (i=0; i < MAX; i++){ //Se hace un for, de 0 hasta 3

	printf("La direccion de la variable var[%d] = %x\n", i, ptr); //Se va imprimiendo la direccion del valor del arreglo 
	printf("Valor de la variable [%d] = %d\n", i, *ptr); //Se va imprimiendo el valor del arreglo en esa direccion 
	ptr ++; //Se pasa la siguiente direccion

}

return 0;

}
