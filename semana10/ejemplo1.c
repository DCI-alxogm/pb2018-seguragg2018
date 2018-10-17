#include<stdio.h>

int main(int argc, char *argv[]) { //Se declara un apuntador para poder leer las entradas antes de la compilacion

printf("El programa que estas ejecutando es: %s\n", argv[0]); //El nombre del programa que se esta ejecutando se guarda en el lugar 0 del apuntador

if (argc==2){ //Si se dieron los argumentos necesarios para el programa, este, sigue su curso
printf("El argumento que se dio es: %s\n", argv[1]); //Se imprime la cadena de caracteres que se dio
}
else if (argc>2){ //Se se dieron argumentos inecesarios, el programa marca error
printf("Mas argumentos de los necesarios \n");
}
else{
printf("Se requiere de al menos 1 argumento\n");
}

return 0;
}
