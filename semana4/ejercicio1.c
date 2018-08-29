#include<stdio.h>

int main(){

	float C, K;
	 float inicial=100, final=200, delta;
	 int n=10;
	 
	 delta=(final-inicial);
	 C=inicial;
	 while(C<=final){
		K=C+273.15;
		printf("%f %f\n", C, K);
		C=C+delta;	//	C+=delta;
	

			}

	return 0;






}
