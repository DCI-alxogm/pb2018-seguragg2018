#include<stdio.h>

int main(){
int MAX = 3;
int var [] = {10, 100, 200};
int i, *ptr;
ptr = &var;

for (i=0; i < MAX; i++){

	printf("La direccion de la variable var[%d] = %x\n", i, ptr);
	printf("Valor de la variable [%d] = %d\n", i, *ptr);
	ptr ++;

}

return 0;

}
