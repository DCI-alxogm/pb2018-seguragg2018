#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

int cont;
float *fp, *d, sum, des;
char var[20];

FILE *l;
l = fopen("promedio.txt", "r");
while (fgets(var, 20, l)!=NULL){
cont ++;
}
fclose(l);


fp = (float*) malloc(cont * sizeof(float));
d = (float*) malloc(cont * sizeof(float));

FILE *lec;
lec = fopen("promedio.txt", "r");

for (int i=0; i<cont; i++){
fscanf(lec, "%f", &fp[i]);
sum = sum + fp[i];

}
fclose(lec);

sum = sum/cont;


FILE *le;
lec = fopen("promedio.txt", "r");

for (int j=0; j<cont; j++){
fscanf(le, "%f", &d[j]);
des = des + pow((d[j]-sum), 2);

}
fclose(le);

des = (1/cont)*des;
des = sqrt(des);

printf("Total de datos: %i\n", cont);
printf("El promedio total es igual a: %f\n", sum);
printf("La desviacion standar es igual a: %f\n", des);



return 0;
}
