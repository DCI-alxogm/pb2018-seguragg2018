#include<stdio.h>
#include<stdlib.h>

double **iniciar(double **m, int a);
void **imp(double **m, int a);

int main(){

double **mat, a, b, c, d, ex, e=0, p=100, eps;
int n, q=0;
FILE *leer;
leer = fopen("base.txt", "r");
fscanf(leer, "%lf %lf %lf %lf %lf %i", &a, &b, &c, &d, &ex, &n);



mat = (double **) malloc((n+2)  * sizeof(double*));
for (int r=0;r<(n+2);r++){
	mat[r]= (double *) malloc((n+2) * sizeof(double)); 
}


mat = iniciar(mat, n);
//for (int i = 1; i<(n+1); i++){
//	for (int j=1; j<(n+1); j++){

//	mat[i][j]=0.0;

//}
//}

for (int i=0; i<(n+1);i++){
	
	mat[i][0]=a;
	mat[0][i]=b;
	mat[i][n+1]=c;
	mat[n+1][i]=d;
	
}

while(p>ex){

for (int i = 1; i<(n+1); i++){
	for (int j=1; j<(n+1); j++){

	mat[i][j]= ((mat[i+1][j]+mat[i][j+1]+mat[i-1][j]+mat[i][j-1])/4.0);

imp
	
}
}

eps= (mat[1][1]-e)/mat[1][1];
e= mat[1][1];


p = eps*100;


q=q+1;
if (q>500) break;

}


for (int i = 1; i < (n+1); i++) {
        for (int j = 1; j < (n+1); j++) {
            printf("%f ", mat[i][j]);
        }
        printf("\n");
    }

printf("\n%f %f %i\n", ex, p, q);

free(mat);
fclose(leer);

}

double **iniciar(double **m, int a){
for (int i = 1; i<(a+1); i++){
	for (int j=1; j<(a+1); j++){

	m[i][j]=0.0;

}
}

return m;

}
