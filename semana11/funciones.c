//Programa creado por Guillermo Segura Gomez
//Ultima modificacion 26/10/18

//En este codigo se incluyen las tres funciones utilizadas en el programa "proyecto2.c"

//Se incluyen las librerias necesarias para el programa
#include<stdio.h>
#include<stdlib.h>

//Se utiliza la funcion "iniciar" para inicializar la matriz en los puntos de 1,1 a (n+1),(n+1), en 0.0
//Para esto la funcion es de tipo con entrada y sin salida pues la matriz es introducida desde el programa principal y se arroja una matriz terminada
//Los argumentos de entrada van a ser la matriz (mat) que se llamara 'm' en esta funcion y la variable (n), la cual se llamara 'a' en esta funcion
double **iniciar(double **m, int a){
	//El ciclo for se hace desde 1,1 hasta (n+1),(n+1) esto se hace para considerar unicamente la matriz de n*n, y no los bordes
	for (int i = 1; i<(a+1); i++){
		for (int j=1; j<(a+1); j++){

			//Se inicializa la matriz en 0.0
			m[i][j]=0.0;

		}
	}

return m; //Se arroja la matriz terminada al programa

}

//Se utiliza la funcion "lados" para inicializar la matriz unicamente en los bordes, y asi mantener una temperatura constante en los bordes
//Esta funcion es de entrada y salida como la anterior, se introducen valores desde el programa principal y se arroja una matriz terminada
//Los argumentos de entrada son la matriz (mat) 'm', la variable n, que son los lados de la matriz, y las variables (a, b, c, d) que son las temperaturas de los bordes de la placa
double **lados(double **m, int n, double a, double b, double c, double d){
	
	//Se utiliza unicamente un ciclo for, pues se incializa un borde a la vez
	for (int i=0; i<(n+1);i++){
	
		m[i][0]=a; //Se inicia el borde izquierdo
		m[0][i]=b; //Se inicia el borde superior
		m[i][n+1]=c; //Se inicia el borde derecho
		m[n+1][i]=d; //Se inicia el borde inferior
	
	}

return m; //Se arroja la matriz terminada al programa

}

//Se utiliza la funcion "imp" para imprimir la matriz en un archivo diferente para cada 10 iteraciones
//Esto se logra gracias a que en el programa principal se tiene un condicional, y cada 10 iteraciones la matriz se imprime con esta funcion, para que no sean tantos archivos
//La funcion es de tipo con entrada y sin salida, pues esta solo imprime los valores y ya, no arroja resultados al programa principal
//Se introduce la matriz, el numero de lados de la matriz 'n', el error calculado y el error minimo (p, ex) y el contador q
void **imp(double **m, int a, int q, double p, double ex){

//Se declara una variale de escritura
FILE *esc;

//Se realizan dos condicionales, esto para determinar si el archivo que se va a imprimir va a ser el del equilibrio final o solo uno mas en la evolucion del programa
//Por este motivo tambien se incluye en la funcion los errores calculados y el contador q, para poder nombrar los arhivos

	if (p>ex){
		//Se declara un arreglo para el nombre de los archivos
		char arc[6]={'P','n','.','t','x','t'};

		//El unico termino que se cambia es la 'n', que corresponde al lugar 1 del arreglo
		//Se le va sumando el contador, por lo que imprimira archivos desde la A a la Z
		arc[1]=q+'A';
		
		//Se guarda el nombre del archivo en una cadena de caracteres
		char *hivo; 
		hivo = arc;

		//Se crea un archivo con el nombre de la cadena
		esc = fopen(hivo, "w");
	}


	if (p<ex){
		
		//Cuando el programa termino, la matriz final se guarda en un archivo llamado equilibrio final
		esc = fopen("Equilibrio_final.txt", "w");
	}

	//Este ciclo for, imprime la matriz, se necesitan dos ciclos, uno para las columnas y otro para las filas
	//El contador del ciclo va desde 1 hasta a+1, esto como ya lo he explicado, para que solo nos imprima una matriz de n*n
	for (int i = 1; i < (a+1); i++) {
	        for (int j = 1; j < (a+1); j++) {
	            fprintf(esc, "%f ", m[i][j]); //Se imprime la matriz en el archivo
	        }
        fprintf(esc, "\n"); //Se imprime un salto de linea para que la matriz quede acomodada
	}

fclose(esc); //Se cierra la variable de escritura
}
