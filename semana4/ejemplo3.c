#include <stdio.h>

int main(){

//Se declaran las variables

	float temp_C, temp_K;
	float inicial=100,final=200,delta;
	int n=10;
	char op[2];
//Utilizamos una variable tipo char,  y un arreglo en la variable de dos caracteres
	op[0]='s';
//Decimos que si algun caracter de la variable es contiene la letra s, siga haciendo la operacion while
	delta = (final-inicial);
	
	while(op[0]=='s'){
		
	temp_K=0;
	temp_C=inicial;

		while(temp_C<=final){

		temp_K=temp_C+273.15;
		printf("%f %f \n", temp_C, temp_K);
		temp_C=temp_C+delta;			

		}

//Escaneas, si deice que 'si', realiza el while otra vez, si dice que 'no', termina el ciclo y por ende tambien el programa

	printf("¿Deseas hacer otra operacion? (si/no)");
	scanf("%s", &op);

	}

return 0;

}
