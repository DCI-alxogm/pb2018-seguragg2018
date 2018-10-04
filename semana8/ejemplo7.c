#include<stdio.h>

int main(){

int i, num[6], sum=0;
printf("Introduce 6 numeros enteros:\n");

for(i=0;i<6;i++){
scanf("%i", (num + i));

sum = sum + *(num + i);

}

printf("Suma = %i\n", sum);
return 0;

}
