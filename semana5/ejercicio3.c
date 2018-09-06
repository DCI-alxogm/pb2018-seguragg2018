#include<stdio.h>
#include<math.h>

int main(){

int in, fin, r, i, o, p, co=1, con;

printf("Hola mundo, este es un programa que calcula numeros primos en un intervalo\n");

while (co==1){

printf("Introduce el intervalo\n");
printf("Valor inicial: ");
scanf("%i", &in);
printf("Valor final: ");
scanf("%i", &fin);

while ((fin-in) > 100){
printf("Escribe un intervalo mas pequeño");
printf("\nValor inicial: ");
scanf("%i", &in);
printf("Valor final: ");
scanf("%i", &fin);

}


	for (i=in;i<=fin ;i++){
		
	r = sqrt(i);	
	p=1;

		for(o=2;o<=r;o++){
		if ((i%o)==0){
		p = 0;
		}
	
	
		}
	
		if (p==1){
		printf("%i ", i);
		con++;
			if (con%10==0) printf("\n");		
			
		}
		}



printf("\nIntroduce 1 si deseas reiniciar el programa, 0 si deseas salir\n");
scanf("%i", &co);
	
}

return 0;

}












