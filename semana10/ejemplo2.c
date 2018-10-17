#include<stdio.h>

int main(int argc, char *argv[]){
//Se declara un apuntador de caracteres para leer elementos antes de la ejecucion del programa

printf("El programa que estas ejecutando es %s\n", argv[0]); //Se da el nombre del programa ejecutado
char *archivo; //Se declara una variable tipo char para poder guardar el nombre del archivo que se va a crear
FILE *fp; //Se declara una variable de escritura
archivo = argv[1]; //El arreglo de caracteres se iguala al lugar de la memoria donde se guardo el nombre
if (argc==2){ //Si se tienen los argumentos necesarios para el programa, el programa sigue
printf("El nombre del archivo a abrir es: %s\n", archivo); //Se imprime el nombre del archivo que se va a crear
fp=fopen(archivo, "w+"); //Se abre el archivo
for (int i=0; i<99; i++){ //Se imprimen 100 veces, "hola mundo" en el archivo creado
fprintf(fp, "hola mundo\n");
}
fclose(fp); //Se cierra la variable de escritura
}
else if (argc>2){ //Si se tienen argumentos inecesarios para el programa, el programa marca error
printf("Mas argumentos de los necesarios\n");
}
else{
printf("Se requiere de al menos un argumento\n");
}

return 0;
}
