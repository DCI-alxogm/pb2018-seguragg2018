#include<stdio.h>

int main(){

int a;
//El programa te dice si es par o no par un numero entero
printf("Introduce un numero\n");
scanf("%i",&a);

//Usa una condicional if
if ((a%2)==0){
//Si el modulo del numero es igual a 0, es un numero par
printf("El numero %i es par\n",a);
//Escribe un letrero con la leyenda "es par"

}
else{
//Si no se cumple la condicion, entonces el numero es impar
printf("El numero %i es impar\n",a);
//Escribe un letrero con la leyenda "es impar"

}

return 0;

}
