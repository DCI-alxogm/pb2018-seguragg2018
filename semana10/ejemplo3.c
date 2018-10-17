#include<stdio.h>

int main(int argc, char *argv[]){
//Se declara un apuntador para guardar elementos antes de la ejecucion del programa

printf("El nombre del programa que estas ejecutando es: %s\n", argv[0]); //Se imprime el programa que se esta ejecutando

char *nombre_archivo; //Se declara un arreglo de caracteres para guardar el nombre del archivo a crear
float Tin, Tfin; //Se declaran las variables
int num;
FILE *fp; //Variable para escribir
if (argc==5){ //Si el programa tiene los argumentos necesarios, el programa seguira

//Mediante el comando atof, se transforman los arreglos de caracteres a variables tipo flotantes

	Tin=atof(argv[1]); 
	Tfin=atof(argv[2]);
	num=atoi(argv[3]);	
	nombre_archivo=argv[4]; //El nombre del archivo a crear se guarda en un arreglo de caracteres, no hay necesidad de transformalo a tipo flotante
	
	printf("El nombre del archivo a abrir es: %s\n", nombre_archivo); //Se imprime el nombre del archivo
	fp=fopen(nombre_archivo, "w+"); //Se crea un archivo con el nombre guardado, en el arreglo de caracteres
	fprintf(fp, "Tin: %f\nTfin: %f\nN: %i", Tin, Tfin, num); //Se imprimen los valores flotantes
	fclose(fp); //Se cierra la variable de escritura

}
else if (argc>5){ //Si el programa no tiene los argumentos necesarios, el programa marcara errores
printf("Diste mas argumentos de los necesarios\n");
}
else {
printf("Se requieren 4 argumentos: Tin, Tfin, num, nombre del archivo\n");
}

return 0;
}
