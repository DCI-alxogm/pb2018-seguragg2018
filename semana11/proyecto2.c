#include<stdio.h>
#include<stdlib.h>

int main(){

double **mat, a, b, c, d, ex, n;
FILE *leer;
leer = fopen("base.txt", "r");
fscanf(leer, "%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &ex, &n);

mat[2][2]=5.0;

mat = (double **) malloc(n  * sizeof(double*));
for (int r=0;r<n;r++){
	mat[r]= (double *) malloc(n * sizeof(double)); 
	printf("%f", mat[r][r]);
}

fclose(leer);

}
