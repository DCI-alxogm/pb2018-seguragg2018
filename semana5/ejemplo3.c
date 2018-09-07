#include<stdio.h>

int main(){

float r;
int n=3, k, j;

//Se declaran las variables 


//Se utilizan for anidados, para hacer la operacion hasta el contador n, n vale 3 por lo tanto realizara el primer for 3 veces

for (j=0; j<n; j++){

//El segundo for de la misma manera realiza tres operaciones

	for(k=0; k<n; k++){
	r = j * k * 1.0;
	printf("%i %i %f\n", j, k, r);
//Se imprimen los resultados de cada iteracion
	}

}

return 0;


}
