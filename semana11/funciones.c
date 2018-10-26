#include<stdio.h>
#include<stdlib.h>

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
