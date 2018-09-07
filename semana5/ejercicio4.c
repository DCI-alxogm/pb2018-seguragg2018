#include<stdio.h>
#include<math.h>

int main(){

int a, r=0, i=0;
//Se utilizan variables tipo enteras

printf("¡Hola!, este es un programa que convierte numeros binarios a numeros decimales\n");
printf("Escribe el numero binario\n");
scanf("%i",&a);
//Se escanea el numero binario

//Lo que hace el ciclo, es ir checando si el ultimo valor es 0 o 1, y mediante un contador se determina que posicion tiene ese numero, si es 0, simplemente solo divide el numero entre 10 para eliminarlo, pero si es 1, realiza la operacion 2^contador, y se la suma al resultado

	while (a>0){
	
  
	if (a%5 == 0){
	a=(a/10);	
	
	}

	else  {
	r= (pow (2,i))+r;
	

	
	a=(a-1)/10;
	
	}

i=1+i;
	}	

//Finalmente se imprime el resultado y ese es el numero decimal

printf("El numero decimal es: %i \n",r);

return 0;



}
