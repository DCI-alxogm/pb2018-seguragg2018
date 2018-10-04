#include<stdio.h>

int main(){

//Se declaran las variables
int i, num[6], sum=0; //Declaramos un arreglo sum de 6 espacios
printf("Introduce 6 numeros enteros:\n");

for(i=0;i<6;i++){
//Se introducen los valores, y el arreglo se manipula como un apuntador
scanf("%i", (num + i)); //Los valores se guardan en los diferentes espacios del arreglo, utlizando la memoria

sum = sum + *(num + i); //Se guarda la suma de los valores en la variable sum

}

//Se imrpime la suma de los valores
printf("Suma = %i\n", sum);
return 0;

}
