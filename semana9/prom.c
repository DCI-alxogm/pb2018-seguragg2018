#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

int cont;
float *fp, sum, des;
char var[20];

FILE *l;
l = fopen("promedio.txt", "r");
while (fgets(var, 20, l)!=NULL){
cont ++;
}
fclose(l);




FILE *lec;
lec = fopen("promedio.txt", "r");
fp = (float*) malloc(cont * sizeof(float));


for (int i=0; i<cont; i++){
fscanf(lec, "%f", fp + i);
sum = sum + *(fp + i);

}
fclose(lec);

sum = sum/cont;

for (int i=0; i<cont; i++){
des= des + pow((*(fp + i) - sum),2);


}

des = (1/cont)*des;
des = sqrt(des);

free (fp);
printf("Total de datos: %i\n", cont);
printf("El promedio total es igual a: %f\n", sum);
printf("La desviacion standar es igual a: %f\n", des);


return 0;
}
