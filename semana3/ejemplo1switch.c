#include<stdio.h>
#include <math.h>
int main(){
//Se declaran todas las variables que se van a usar en el programa
int opcion, a;
float m, n, x, y, r, q;

//Despues se escanea la variable opcion, para usar la funcion switch
printf("Teclear una opcion\n");
printf("(1) para convertir temperaturas");
printf(" (2) para convertir coordenadas\n");
scanf("%i",&opcion);

//La opcion switch es una condicional, si el resultado de la variable opcion es 1, convierte temperatura, y si es 2, convierte coordenadas, y si es algun otro valor diferente, te arroja una leyenda que dice: opcion fallida

switch(opcion)
{
	case 1:

//El caso 1, es el de conversion de temperatura, usa tambien una condicional, pero en este caso una tipo if

printf("¡Hola!, este es un programa que convierte grados C° a F° y viceversa\n");
printf("Escribe (1) si quieres convertir de F° a C°\n");
printf("Escribe (2) si quieres convertir de C° a F°\n");
scanf("%i",&a);

//Te pide 1 si deseasa de F a C, y 2 de C a F

//Usas dos condicionales, una si pones C y otra si pones F
if (a==1){
printf("\nEscribe la cantidad de grados F°\n");
scanf ("%f",&m);
n= (m-32)/1.8;
printf("El resultado es; %f",n);
printf(" grados Centrigrados\n");
return 0;


}

if (a==2){
printf("\nEscribe la cantidad de grados C°\n");
scanf ("%f",&m);
n= (m*1.8)+32;
printf("El resultado es; %f",n);
printf(" grados Farenheit\n");
return 0;
}

//Si introduces un valor diferente al de C o F, automaticamente termina la funcion switch con el break

break;
		
	case 2:	

//El caso 2, convierte coordenadas cartesianas a polares, y ademas te indica en que cuadrante esta el punto

printf("Este programa convierte coordenadas cartesianas a polares y te indica en que cuadrante se encuentra el punto que dan las coordenadas\n");
printf("Introduce en orden (x, y) las coordenadas cartesianas\n");

//Te pide los valores de 'x' y de 'y'

scanf("%f",&x);
scanf("%f",&y);
//Aplicas las formulas para obtener las coordenadas polares
r=sqrt((x*x)+(y*y));
q= atan(y/x)*57.2958;

//Para determinar en que cuadrante esta, usa una serie de condicionales 
//Matematicamente si 'x' y 'y' son positivas, se esta en el primer cuadrante, y asi sucesivamente con los otros cuadrantes del plano, por lo tanto, se consideran todos los casos  para los cuales 'x' y 'y' son numeros enteros
printf("Las coordenadas estan");
if (y>0 && x>0) printf(" en el cuadrante : I\n");
if (y>0 && x<0){ 
printf(" en el cuadrante : II\n");
q = q+180;
}
if (y<0 && x<0){ 
printf(" en el cuadrante : III\n");
q = q+180;
}
if (y<0 && x>0){
printf(" en el cuadrante : IV\n");
q = q+360;
} 

//Para que el angulo de, es necesario considerar los casos especificos de cada cuadrante, y por lo tanto, es cada funcion if, se hace la suma especifica 

//Para los casos en los que algun valor es igual a 0, se considera cuando se esta en el origen 'x' & 'y' igual a 0, y los valores para los cuales 'x' o 'y', estan sobre los ejes
if (y==0 && x==0) printf(" en el origen\n");
if (x==0 && y!=0) printf (" sobre el eje y\n");
if (y==0 && x!=0) printf (" sobre el eje x\n");

printf("Los resultados estan en orden (r, teta)\n");
printf("%f\n", r);
printf("%f\n", q);
//Te arroja los resultados en orden de 'r' y de teta



break;


	default:

//Si en la variable opcion se coloca un valor diferente a 1 o 2, se salta a esta parte
printf("Opcion fallida\n");
break;



}

return 0;


}
