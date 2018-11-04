//Se incluyen la libreria <define.h> que es la que esta definiendo las funciones
#include<define.h>
#include<stdio.h> 
#include<stdlib.h>

//Las funciones del programa estan incluidas en la libreria que declaramos arriba


//Se ejecuta la parte "main" del programa
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

mat = lados(mat, n, a, b, c, d);



while(p>ex){

	
	for (int i = 1; i<(n+1); i++){
		for (int j=1; j<(n+1); j++){
			
			mat[i][j]= ((mat[i+1][j]+mat[i][j+1]+mat[i-1][j]+mat[i][j-1])/4.0);

		}
	}

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


printf("Se hicieron un numero total de %i iteraciones\n", q);
printf("El error fue de %f que es menor al establecido inicialmente %f\n", p, ex);

free(mat); 


return 0; 
}


