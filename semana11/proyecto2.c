#include<stdio.h>
#include<stdlib.h>

int main(){

double **mat, a, b, c, d, ex, n;
FILE *leer;
leer = fopen("base.txt", "r");
fscanf(leer, "%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &ex, &n);
printf("%f %f %f %f %f %f\n", a, b, c, d, ex, n);


mat = (double **) malloc(n  * sizeof(double*));
for (int r=0;r<n;r++){
	mat[r]= (double *) malloc(n * sizeof(double)); 
}


for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%f ", mat[i][j]);
        }
        printf("\n");
    }



fclose(leer);

}
