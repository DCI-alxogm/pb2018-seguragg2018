#include<stdio.h>

int main(){

//Primero, declaramos las variables

float temp_C, temp_K;
 float inicial=100, final=200, delta;
 int n=10;
 int op=1;

//Utilizamos una delta para hacer la suma

delta=(final - inicial);

//Utilizamos un while para decirle al usuario si quiere salir del programa o no

while(op==1){

	temp_K=0;
	temp_C=inicial;

	while(temp_C<=final){
	
	 temp_K=temp_C+273.15;
	 printf("%f %f\n",temp_C, temp_K);
	 temp_C=temp_C+delta;

}
//Hacemos las conversiones de temperatura


//Le decimos al usuario si quiere permanecer o no en el programa
	printf("Si deseas hacer otra operacion presiona 1, si no 0\n");
	scanf("%i",&op);

}


}
