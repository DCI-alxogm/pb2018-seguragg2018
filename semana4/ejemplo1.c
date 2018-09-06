#include<stdio.h>

int main(){

//Primero declaramos las variables

	float C, K;
	 float inicial=100, final=200, delta;
	 int n=10;
	 
//Utilizamos un while para para hacer el calculo

	 delta=(final-inicial);
	 C=inicial;
	 while(C<=final){
		K=C+273.15;
		printf("%f %f\n", C, K);
		C=C+delta;	//	C+=delta;
	

			}

//Lo que hac el while es hacer la operacion hasta que C llega a la final

	return 0;






}
