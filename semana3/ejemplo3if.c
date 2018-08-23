#include<stdio.h>

int main(){

//El programa te dice que numero es mas grande

int num1, num2;
printf("Introduzca dos numeros enteros\n");
scanf("%i %i",&num1,&num2);
//Introduces dos numeros enteros


//Primero compara si los numeros son iguales
if (num1==num2)
{
printf("Resultado: %d = %d\n", num1, num2);
}	
//Si no son iguales, entonces compra SI uno es mayor que otro
else if (num1>num2)
{
printf("Resultado: %d > %d\n", num1, num2);
}
//Si el primero no es mayor que el segundo, entonces el segundo es mayor que el tercero
else{
printf("Resultado: %d < %d\n", num1, num2);
}

//Al final de cada else, imprime un aviso de como quedo la igualdad o desigualdad
return 0;

}
