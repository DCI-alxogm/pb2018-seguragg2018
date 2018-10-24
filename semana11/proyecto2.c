#include<stdio.h>
#include<stdlib.h>

int main(){

double **mat, a, b, c, d, ex, e=0, p=100, eps;
int n, q=0;
FILE *leer;
leer = fopen("base.txt", "r");
fscanf(leer, "%lf %lf %lf %lf %lf %i", &a, &b, &c, &d, &ex, &n);
printf("%f %f %f %f %f %i\n", a, b, c, d, ex, n);


mat = (double **) malloc((n+2)  * sizeof(double*));
for (int r=0;r<(n+2);r++){
	mat[r]= (double *) malloc((n+2) * sizeof(double)); 
}



for (int i = 1; i<(n+1); i++){
	for (int j=1; j<(n+1); j++){

	mat[i][j]=0.0;

}
}

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

//eps= (mat[1][1]-e)/mat[1][1];
//e= mat[1][1];
	
}
}

eps= (mat[1][1]-e)/mat[1][1];
e= mat[1][1];

//eps[i]=mat[1][1];
//e = (mat[1][1]-eps[i-1])/mat[1][1];

p = eps*100;

printf("%f\n", p);

if (q>50){ 
printf("%f %i\n", p, q);
break;
}
//p = e*100;
q=q+1;



}


for (int i = 0; i < (n+2); i++) {
        for (int j = 0; j < (n+2); j++) {
            printf("%f ", mat[i][j]);
        }
        printf("\n");
    }

printf("\n%f %f\n", ex, p);

free(mat);
fclose(leer);

}
