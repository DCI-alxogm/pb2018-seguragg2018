#include <stdio.h>

int main(){

	float temp_C, temp_K;
	float inicial=100,final=200,delta;
	int n=10;
	char op[2];

	op[0]='s';
	delta = (final-inicial);
	
	while(op[0]=='s'){
		
	temp_K=0;
	temp_C=inicial;

		while(temp_C<=final){

		temp_K=temp_C+273.15;
		printf("%f %f \n", temp_C, temp_K);
		temp_C=temp_C+delta;			

		}

	printf("¿Deseas hacer otra operacion? (si/no)");
	scanf("%s", &op);

	}

return 0;

}
