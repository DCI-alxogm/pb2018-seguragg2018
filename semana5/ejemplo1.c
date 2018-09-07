#include<stdio.h>

int main()
{
	float C, K;
	
	int i, n, p=1, f, delta;

//Primero, se declaran las variables, usamos tipo float para la temperatura

	printf("Hola!, este es un programa que ejecuta conversiones de temperaturas en intervalos, con un determinado numero de veces\n");
	
	while (p==1){

//Utilizamos un while, para no cerrar el ciclo en caso de que el usuario quiera repetirlo
	
	printf("Elije la temperatura inicial en grados C°\n");
	scanf("%f",&C);
	printf("Elije la temperatura final en grados C°\n");
	scanf("%i",&f);
	printf("Elije el numero de veces que quieres realizar la conversion\n");
	scanf("%i",&n);
	delta = ((f - C)/n);

//Se escanean las temperaturas y a partir de ahi se saca delta


	for (i=0; i<=n; i++){

		K=C+273.15;
		printf("%f %f\n", C, K);
		C = C + delta;
			if (i == 15){
			printf("Error: numero de iteraciones excedidas\n");
			return 1;

			}

//Se realizan las operaciones en base a un ciclo for, se utilizan for de manera anidadas

	}
	
	printf("Si desea ejecutar el programa nuevamente escriba 1, si no escriba 0\n");
	scanf("%i",&p);
	
//Se le pide al usuario si quiere repetir de nuevo la operacion o salir del programa
	}


return 0;


}
