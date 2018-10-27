//Programa creado por Guillermo Segura Gomez
//Ultima edicion 26/10/18

//Se incluyen las librerias necesarias para el programa
#include<stdio.h> 
#include<stdlib.h>

//Se declaran tres variables 
//Una para inicializar la matriz en todos sus puntos. Los puntos seran iguales a 0.0
double **iniciar(double **m, int a);

//Otra para inicializar los bordes de la matriz con las temperaturas establecidas por el usuario
double **lados(double **m, int n, double a, double b, double c, double d);

//Y finalmente la ultima para imprimir la matriz en archivos diferentes para cada iteracion
void **imp(double **m, int a, int q, double p, double ex);

//Se utlizan dos matrices de tipo entrada y salida, porque los datos son escaneados e inicializados por el programa, con estos datos se llama a la funcion y la funcion arroja una matriz con los parametros requeridos
//Se utiliza una funcion de tipo entrada y sin salida, ya que el programa no requiere que la funcion arroje nada, simplemente que imprima la matriz. Por lo que se le dan los valores que seran necesarios a la funcion, y la funcion imprime la matriz, y sigue la otra parte del programa.


//Inicio de la funion main
int main(){

//Se declaran las variables asi como la matriz a usar en el  programa

double **mat, a, b, c, d, ex, e=0, p=100, eps; //La matriz(**mat), los bordes de la placa(a, b, c, d), el error minimo(ex), el error calculado(p), y otras variables necesarias para realizar los calculos(eps, e)
int n, q=0; //Los lados de la placa, y un contador 

//Se declara una variable de lectura
FILE *leer;

//El archivo que se abre tiene como nombre "base.txt", en el se escanean los valores de los bordes de la placa (a, b, c, d), el error minimo(ex) y el numero de lados de la placa(n)
leer = fopen("base.txt", "r");
fscanf(leer, "%lf %lf %lf %lf %lf %i", &a, &b, &c, &d, &ex, &n);

//Se cierra la variable de lectura
fclose(leer);

//Ya que la matiz se declaro como apuntador, se tiene que reservar la memoria, primero para las filas y luego para las columnas
//La memoria se reserva de (n+2)*(n+2) en lugar de una de n*n, esto se hace con el fin de tener una matriz mucho dos columnas y dos filas mas grande para que en esos lugares se guarde la temperatura inicial de los bordes de la placa
mat = (double **) malloc((n+2)  * sizeof(double*));
for (int r=0;r<(n+2);r++){
	mat[r]= (double *) malloc((n+2) * sizeof(double)); 
}

//En esta funcion se inicializa la matriz a 0.0 unicamente en la region en donde se va a trabajar, de 1,1 a (n+1),(n+1)
mat = iniciar(mat, n);

//En esta funcion se inicializan los bordes de la matriz con las temperaturas iniciales de la placa, como las temperaturas en los bordes siempre permanecen constantes, al momento de trabajar la matriz, esos puntos no se tocan por el programa, siempre son iguales
mat = lados(mat, n, a, b, c, d);


//Mientras el error minimo sea mayor al error calculado, ejecuta el ciclo
while(p>ex){

	//Se trabaja unicamente con los lugares (1,1) hasta (n+1,n+1), por lo que en resumidas cuentas se trabaja con la matriz de n*n
	for (int i = 1; i<(n+1); i++){
		for (int j=1; j<(n+1); j++){
			//Aqui se ejecuta el calculo del promedio, se suman los lados y se divide entre 4 lados, el valor se guarda en el lugar correspondiente de la matriz
			mat[i][j]= ((mat[i+1][j]+mat[i][j+1]+mat[i-1][j]+mat[i][j-1])/4.0);

		}
	}

	//La variable eps nos sirve para hacer el calculo del error
	//En eps se guarda el valor de la division del 'valor nuevo'=mat[i][j]-'valor viejo'= e / 'valor nuevo'= mat[i][j]
	//Se tiene que utilizar la variable 'e', para ir guardando el valor nuevo en ella, y que en la siguiente iteracion este valor sea el valor viejo para asi poder realizar el calculo del error
	eps= (mat[1][1]-e)/mat[1][1];
	e= mat[1][1];

	//El valor de la division (eps) se multiplica por 100 para asi tener el error calculado, esto se guarda en la variable p
	p = eps*100;

	//Se establece una condicional para imprimir las iteraciones, ya que si se imprimen todas serian demasiados archivos
	//Las iteraciones se imprimen cada 10, o cuando el error calculado es menor al error inicial y por lo tanto la placa esta en equilibrio
	if (q%10==0 || p<ex){
		imp(mat, n, q/10, p, ex);
	}
	
	//El contador suma 1 en cada iteracion
	q=q+1;
	

	//Se establece una condicional de paro, si q es mayor a 500 iteraciones el programa imprime la matriz y arroja un mensaje de error
	if (q>500){
		printf("Error, numero de iteraciones exedidas %i\nEl error calculado fue de %f\n",q ,p);
		p = p-100.0; //Esta suma se hace para que en la funcion imp, el archivo que se imprime lleve el nombre de Equilibrio_termico.txt, aunque este no este en equilibrio, pero es necesario para saber cual fue el ultimo archivo impreso
		imp(mat, n, q/10, p, ex);
		return 0; //Termina el programa
	}

}

//Si todo sale bien y no hay error el programa arroja un resultado final con el numero de iteraciones y los errores
printf("Se hicieron un numero total de %i iteraciones\n", q);
printf("El error fue de %f que es menor al establecido inicialmente %f\n", p, ex);

free(mat); //Se libera la memoria


return 0; //Termina el programa
}

