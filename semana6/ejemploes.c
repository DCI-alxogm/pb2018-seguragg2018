#include<stdio.h>

int main(){

FILE*archivo;
float var1, var2;
char var[255];

archivo=fopen("text.txt", "w");
fputs("Esta es una prueba de fputs \n", archivo);
fprintf(archivo, "fprintf\n");
var1=0.15;
var2=100.8;
fprintf(archivo, "%f %f\n", var1, var2);
fclose(archivo);

return 0;









}
