#include <stdio.h>

int main(){

int a, i, r=1, p=1;

while (p==1){

printf("¡Hola!, este es un programa que calcula el factorial de un numero entero\n");
printf("Introduce el numero\n");
scanf("%i",&a);

for (i=1; i<=a; i++){ 
r=r*i;

}

printf("El valor factorial del numero es: %i\n", r);
printf("Si quieres reiniciar el programa introduce 1, si no 0\n");
scanf("%i",&p);

}
}
