#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){ 
//Se declara en la funcion main, un apuntador de tipo char para leer y guardar en la memoria las entradas que se le quiera dar al programa
printf("El nombre del programa que estas ejecutando es: %s\n", argv[0]); //El nombre del programa ejecutado se guarda en el lugar 0 del arreglo

//SE declaran las variables
float xo, yo, zo, esp;
int no;
char *nombre_archivo; //Se declara un arreglo de caracteres, para crear un archivo que guarde los resulados
FILE *fp; //Variable para escribir

if (argc==7){ //Si el numero de argumentos es igual a 7, el programa se ejecuta

//El comando atof, covierte los lugares del apuntador, de variables tipo char a variables tipo float
//Se van guardando los lugares en las variables
	xo = atof(argv[1]);
	yo = atof(argv[2]);
	zo = atof(argv[3]);
	esp = atof(argv[4]);
	no = atoi(argv[5]);
	nombre_archivo = argv[6]; //Se guarda el nombre del archivo en la cadena de caracteres
	
	printf("El nombre del archivo a abrir es: %s\n", nombre_archivo); //Se crea un archivo con el nombre guardado previamente en la cadena de caracteres
	fp=fopen(nombre_archivo, "w+");	
	for (int i=0; i<no; i++){ //Se declara un ciclo for para poder hacer el ciclo de 0 hasta la variable no
	fprintf(fp, "%f \t %f \t %f\n", xo, yo, zo);

//Se hacen los calculos

	xo = xo + esp;	
	yo = yo + esp;	
	zo = zo + esp;		
	}	
	fclose(fp); //Cierra la variable de escritura
}
else if(argc<7){ //Si el numero de argumentos es diferente de 7, el programa manda errores
printf("Error 45: Introduciste un menor numero de argumentos\n");
}
else {
printf("Error 219: Se requieren los argumentos: xo, yo, zo, espaciado, numero de veces y nombre\n");
}
return 0;
}
