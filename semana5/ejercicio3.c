#include<stdio.h>
#include<math.h>

int main(){

int in, fin, r, i, o, p, co=1, con;
//Se declaran todas las variables, se utilizan unicamente variables enteras

printf("Hola mundo, este es un programa que calcula numeros primos en un intervalo\n");

while (co==1){

//Se le pide al usuario que determine un intervalo
printf("Introduce el intervalo\n");
printf("Valor inicial: ");
scanf("%i", &in);
printf("Valor final: ");
scanf("%i", &fin);
//Si el intervalo es demasiado grande se le pide al usuario que introduzca un nuevo intervalo
while ((fin-in) > 100){
printf("Error: Escribe un intervalo mas pequeño");
printf("\nValor inicial: ");
scanf("%i", &in);
printf("Valor final: ");
scanf("%i", &fin);

}

//Se utilizan ciclos for anidados para determinar el resultado

	for (i=in;i<=fin ;i++){
//El primer for lo que hace es aumentar los numeros desde el inicio hasta el fin del intervalo
//Para determinar si un numero es primo se le saca raiz cuadrada, y los resultados de 0, hasta la raiz, son sus posibles divisores, si un numero es dividido entre alguno de estos posibles numeros no es primo
	
	r = sqrt(i);	
	p=1;

//Lo que hace el segundo ciclo for es checar los estos divisores, desde 0 hasta el numero

		for(o=2;o<=r;o++){
		if ((i%o)==0){
		p = 0;
		}
//Si el numero es primo, le asigna un valor de 1 a la variable p	
	
		}
	
		if (p==1){
		printf("%i ", i);
		con++;
			if (con%10==0) printf("\n");		
//Si es primo, se imprime el numero

		}
		}


//Finalmente te pregunta si te quieres salir del ciclo o quieres hacer de nuevo la operacion
printf("\nIntroduce 1 si deseas reiniciar el programa, 0 si deseas salir\n");
scanf("%i", &co);
	
}

return 0;

}












