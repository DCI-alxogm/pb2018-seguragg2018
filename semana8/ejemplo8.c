#include<stdio.h>
#include<stdlib.h>

int main(){

//Se declaran las variables
int i, sum = 0;
int *num; //Se declara una variable tipo apuntador

printf("Introduce 6 numeros enteros: \n");
num = (int*) malloc(6 * sizeof(int)); //Se reserva la memoria de 6 x entero
//Se usan 6 ya que el ciclo for tambien es hasta 6

for(i = 0; i< 6; i++){

//Se manipula la variable tipo apuntador como arreglo
//Se guardan los valores en cada espacio del arreglo
scanf("%i", &num[i]);

//Se suman los valores en la variable sum
sum = sum + num[i];


}

//Se imprime el valor de la suma 
printf("Suma = %i\n", sum);

return 0;

}
