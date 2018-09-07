#include <stdio.h>

int main(){

//Se utilizan variables unicamente enteras
int a, i, r=1, p=1;
//Usamos un ciclo while para ver si el usuario quiere seguir en el programa o no
while (p==1){

printf("¡Hola!, este es un programa que calcula el factorial de un numero entero\n");
printf("Introduce el numero\n");
scanf("%i",&a);
r=1;
//Escaneas la variable
for (i=1; i<=a; i++){ 
//El resultado se va multiplicando por el contador del for hasta que este es igual a la variable
r=r*i;

}

//Finalmente se imprime el resultado y se le pregunta al usuario si quiere realizar de nuevo el ciclo
printf("El valor factorial del numero es: %i\n", r);
printf("Si quieres reiniciar el programa introduce 1, si no 0\n");
scanf("%i",&p);

}
}
