#include<stdio.h>
#include<math.h>

int main(){

int in, fin, r, i, o;

printf("Hola, este es un programa que calcula numeros primos en un intervalo\n");
printf("Introduce el intervalo\n");
printf("Valor inicial: ");
scanf("%i", &in);
printf("Valor final: ");
scanf("%i", &fin);

	for (i=in;i<=fin ;i++){
		
	r = sqrt(i);	

		for(o=r;o<=0;o--){
		if (i%o==0){
		break;
		}
		printf("%i",i);
	
		}
	
	


	}











}
