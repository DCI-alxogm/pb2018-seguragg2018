#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
printf("El nombre del programa que estas ejecutando es: %s\n", argv[0]);
float xo, yo, zo, esp;
int no;
char *nombre_archivo;
FILE *fp;
if (argc==7){
	xo = atof(argv[1]);
	yo = atof(argv[2]);
	zo = atof(argv[3]);
	esp = atof(argv[4]);
	no = atoi(argv[5]);
	nombre_archivo = argv[6];
	
	printf("El nombre del archivo a abrir es: %s\n", nombre_archivo);
	fp=fopen(nombre_archivo, "w+");	
	for (int i=0; i<no; i++){
	fprintf(fp, "%f \t %f \t %f\n", xo, yo, zo);
	xo = xo + esp;	
	yo = yo + esp;	
	zo = zo + esp;		
	}	
	fclose(fp);
}
else if(argc<7){
printf("Error 45: Introduciste un menor numero de argumentos\n");
}
else {
printf("Error 219: Se requieren los argumentos: xo, yo, zo, espaciado, numero de veces y nombre\n");
}
return 0;
}
