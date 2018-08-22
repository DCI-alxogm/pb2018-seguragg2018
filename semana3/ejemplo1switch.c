#include<stdio.h>
int main(){

int opcion;


printf("Teclear una opcion\n");
printf("(1) para convertir temperaturas");
printf(" (2) para convertir coordenadas\n");

scanf("%i",&opcion);

switch(opcion)
{
	case 1:
		printf("Entre a la opcion 1\n");
		break;
		
	case 2:


		printf("Entre a la opcion 2\n");
		break;
	default:
		printf("Opcion fallida\n");
		break;



}

return 0;


}
