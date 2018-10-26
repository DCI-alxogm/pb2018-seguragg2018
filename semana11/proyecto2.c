#include<stdio.h>
#include<stdlib.h>

double **iniciar(double **m, int a);
double **lados(double **m, int n, double a, double b, double c, double d);
void **imp(double **m, int a, int q, double p, double ex);

int main(){

double **mat, a, b, c, d, ex, e=0, p=100, eps;
int n, q=0;
FILE *leer;
leer = fopen("base.txt", "r");
fscanf(leer, "%lf %lf %lf %lf %lf %i", &a, &b, &c, &d, &ex, &n);

fclose(leer);

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

/*
for (int i=0; i<(n+1);i++){
	
	mat[i][0]=a;
	mat[0][i]=b;
	mat[i][n+1]=c;
	mat[n+1][i]=d;
	
}

*/


mat = lados(mat, n, a, b, c, d);

while(p>ex){
//for (q=0; p>ex; q++){

for (int i = 1; i<(n+1); i++){
	for (int j=1; j<(n+1); j++){

	mat[i][j]= ((mat[i+1][j]+mat[i][j+1]+mat[i-1][j]+mat[i][j-1])/4.0);



	
}
}

//imp(mat, n, q, p, ex);

eps= (mat[1][1]-e)/mat[1][1];
e= mat[1][1];


p = eps*100;

if (q%10==0 || p<ex){
imp(mat, n, q/10, p, ex);
}

q=q+1;

if (q>500){
printf("Error, numero de iteraciones exedidas %i\nEl error calculado fue de %f\n",q ,p);
p = p-100.0;
imp(mat, n, q/10, p, ex);
return 0;
}

}


/*for (int i = 1; i < (n+1); i++) {
        for (int j = 1; j < (n+1); j++) {
            printf("%f ", mat[i][j]);
        }
        printf("\n");
    }
*/

printf("Se hicieron un numero total de %i iteraciones\n", q);
printf("El error fue de %f que es menor al establecido inicialmente %f\n", p, ex);

free(mat);


return 0;
}

double **iniciar(double **m, int a){
for (int i = 1; i<(a+1); i++){
	for (int j=1; j<(a+1); j++){

	m[i][j]=0.0;

}
}

return m;

}

double **lados(double **m, int n, double a, double b, double c, double d){
for (int i=0; i<(n+1);i++){
	
	m[i][0]=a;
	m[0][i]=b;
	m[i][n+1]=c;
	m[n+1][i]=d;
	
}

return m;

}

void **imp(double **m, int a, int q, double p, double ex){
FILE *esc;

if (p>ex){
char arc[6]={'P','n','.','t','x','t'};
arc[1]=q+'A';
char *hivo;
hivo = arc;
esc = fopen(hivo, "w");
}
if (p<ex){
esc = fopen("Equilibrio_final.txt", "w");
}


for (int i = 1; i < (a+1); i++) {
        for (int j = 1; j < (a+1); j++) {
            fprintf(esc, "%f ", m[i][j]);
        }
        fprintf(esc, "\n");
    }
fclose(esc);
}
