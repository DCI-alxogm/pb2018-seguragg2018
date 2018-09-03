#include<stdio.h>

int main(){

float temp_C, temp_K;
 float inicial=100, final=200, delta;
 int n=10;
 int op=1;

delta=(final - inicial);

while(op==1){

	temp_K=0;
	temp_C=inicial;

	while(temp_C<=final){
	
	 temp_K=temp_C+273.15;
	 printf("%f %f\n",temp_C, temp_K);
	 temp_C=temp_C+delta;

}

	printf("Si deseas hacer otra operacion presiona 1, si no 0\n");
	scanf("%i",&op);

}


}
