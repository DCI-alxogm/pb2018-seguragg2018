#include<stdio.h>
#include<math.h>

int main(){
//Primero, se declaran todas las variables del programa
int es, p, b, n, x, a;
float integral, mul= 0, h=0, k, f;

//Despues se declara una variable tipo FILE para abrir la base de datos
FILE *var;
var=fopen("base.txt","r");//Se abre la base de datos
fscanf(var, "%i %i %i %i %f", &p, &a, &b, &n, &k); //Se leen los datos
es = (b - (a-1))/n; //Se calcula es espaciado que tendran las variables


fclose(var); //Aqui se cierra la variable para leer los datos

//Se abre una nueva variable para escribir en un archivo
FILE *rar; 
rar = fopen("resultados.txt", "w");

//Aqui se realizan los calculos del programa
for(int i=a;i<=b;i=i+es){
x = pow (i, p); 
//Se eleva al cuadrado el numero a, que es el valor minimo a un exponente p, y se le va sumando el espaciado, por eso es que usamos i para el valor de a + el espaciado, y a lo mantenemos constante para calculos posteriores

//Se realiza el metodo del trapecio, por eso mantuvimos a constante

h = (i-a)/(k);

	for (int j=1; j<k; j++){
	mul = mul + pow((a+j*h),p);
	
	}
f = (pow (a, p) + pow(i, p))/2; 
//Se calculan por partes las operaciones en el metodo del trapecio y se hace la operacion final aqui
integral = h * (f+mul);
fprintf(rar, "%i elevado a la %i es igual a %i, y la integral es: %f\n",i, p, x, integral);

//Se imprimen los resultados en un archivo y se cierra la variable para escribir
}
fclose(rar);
return 0;







}
