#include<stdio.h>

int main(){
float var1, var2;
char var[255];
FILE*archivo;

archivo = fopen("text.txt", "r");
fgets(var, 255, (FILE*)archivo);
printf("%s",var);
fscanf(archivo, "%s", var);
printf("%s\n",var);
fscanf(archivo, "%f %f", &var, &var2);
printf("%f%f\n", var1, var2);
fclose(archivo);


}
