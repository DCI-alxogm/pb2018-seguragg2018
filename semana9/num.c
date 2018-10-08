//Programa creado por Guillermo Segura Gomez
#include<stdio.h>
#include<stdlib.h>

int main(){

//Primero declaramos las variables
int cont; //Utilizamos una variable entera para el contador
char var[40]; //Utilizamos un arreglo de caracteres para poder leer la cantidad de lineas
float *fp, num=-0.000001; //Utilizamos variables tipo flotantes para los calculos
//Declaramos un apuntador fp

//Declaramos una variable de lectura
FILE *l;
l = fopen("num_maximo.txt", "r");

//Leemos la cantidad de lineas y las guardamos en un contador 
while (fgets(var, 40, l)!=NULL){ 
cont ++;
}

fclose(l); //Cerramos esa variable de lectura

FILE *lec; //Declaramos una nueva variable de lectura
lec = fopen("num_maximo.txt", "r");
fp = (float*) malloc(cont*sizeof(float)); //Asignamos la memoria un arreglo tipo malloc


	for(int i=0; i<cont; i++){
	fscanf(lec, "%f", fp+i); //Se leen los datos del archivo y se guardan en el arreglo

		if (*(fp+i)>num){ //Se pregunta, si el dato anterior es mayor al dato de ese momento, quedate con el mayor y asi sucesivamente, hasta quedar con el dato mas grande
		num = *(fp+i);
		}


	}

fclose(lec); //Se cierra la variable de lectura

printf("El numero mayor en la lista es: %f\n", num); //Se imprimen los resultados

free(fp); //Se libera la memoria
}
