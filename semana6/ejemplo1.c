#include<stdio.h>

int main(){

//Primero se declaran las variables, y se declara un arreglo de tipo flotante, las otras variables son de los contadores, y estas variables son enteras
int i, n;
float arr[n];


printf("¡Hola mundo!, ¡este es un programa que te pide ingresar una serie de datos!.\n¡A los datos los multiplica por dos!\n");
printf("Introduce el numero de numeros a ingresar\n");
scanf("%i",&n);
//Mediante un scanf, el usuario proporciona el numero de lugares que se guardaran en el arreglo
printf("Introduce los numeros ahora\n");

	for(i=0;i<n;i++){
	scanf("%f",&arr[i]); 
//Se escanea cada numero flotante y se guarda en el arreglo con el indice i
//Se guarda practicamente en el lugar i del for

	arr[i]=arr[i]*2;     

//Despues se multiplica por dos cada lugar i del arreglo y se sobreescribe en el mismo lugar
	}

printf("Los numeros multiplicados por dos son: \n");


	for(i=0;i<n;i++){
	printf("%f \n",arr[i]);
//Finalmente se imprime cada lugar del arreglo, y listo, programa terminado
	}


return 0;

}
