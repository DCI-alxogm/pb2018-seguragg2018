#include<stdio.h>

int main() {

int var = 20; 
int *ip;
ip = &var;

printf("La direccion de la variable var es: %x\n", (int) &var );
printf("Direccion guardada en el apuntador ip: %x\n", (int) ip );
printf("El valor de *ip: %d\n", *ip);
return 0;

}
