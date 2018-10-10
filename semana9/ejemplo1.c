#include<stdio.h>

//Se define la fucion void afuera de la funcion main
void cuadrado(); //Este tipo de funcion no tiene entrada ni salida 

int main(){
	cuadrado(); //Se llama a la funcion

	return 0; //Termina el programa

}

void cuadrado(){ //Todo se realiza en la funcion 'cuadrado'
float x, x2;
printf("Introduce un numero\n");
scanf("%f", &x);
x2=x*x;
printf("El cuadrado de %f es %f\n", x, x2);

//Al final se regresa a la funcion main
}
