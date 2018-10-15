#include<stdio.h>

int main(int argc, char *argv[]){

printf("El programa que estas ejecutando es %s\n", argv[0]);
char *archivo;
FILE *fp;
if (argc==2){
printf("El nombre del archivo a abrir es: %s\n", archivo);
fp=fopen(archivo, "w+");
for (int i=0; i<99; i++){
fprintf(fp, "Tu hermana\n");
}
fclose(fp);
}
else if (argc>2){
printf("Mas argumentos de los necesarios\n");
}
else{
printf("Se requiere de al menos un argumento\n");
}

return 0;
}
