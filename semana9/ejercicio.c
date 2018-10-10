//Programa creado por Guillermo Segura Gomez
#include<stdio.h>

//Se declaran las cuatro funciones que vamos a utilizar
void cuadrado(); //No entrada, no salida
void cubo(float h); //Si entrada, no salida
float cuatro(); //No entrada, si salida
float quin(float h); //Si entrada, si salida

int main(){

//Se declaran las variables que vamos a utilizar en la funcion main 

int num; //Esta variable se usa para el condicional
float n2, r3, n4, r4; //Estas variables se utilizan para las funciones que requieren una entrada o una salida

printf("¡Hola!, este es un programa que realiza algunas funciones con numeros decimales\n");
printf("Introduce (1), si deseas f(x)=x²\nIntroduce (2), si deseas f(x)=x³\n");
printf("Introduce (3), si deseas f(x)=x⁴\nIntroduce (4), si deseas f(x)=x⁵\n");

scanf("%i", &num); //Se escanea el condicional
//Las funciones estan en orden como estan declaradas arriba
//Todas evaluan f(x)=x^n

if (num==1){ //Sin entrada ni salida
cuadrado();
}

if (num==2){ //Con entrada, pero sin salida
printf("Introduce el numero que deseas elevar al cubo\n");
scanf("%f", &n2); //Entrada
cubo(n2);
}

if (num==3){ //Sin entrada, pero con salida
r3=cuatro();
printf("f(x)=x⁴ es igual a: %f\n", r3); //Salida
}

if (num==4){ //Con entrada y con salida
printf("Introduce el numero que deseas elevar a la quinta\n");
scanf("%f", &n4); //Entrada
r4=quin(n4);
printf("f(%f)=x⁵ es igual a: %f\n",n4, r4); //Salida
}

return 0;
//Aqui finaliza la funcion main
}

//Aqui se realizan las funciones definidas antes del main

void cuadrado(){ //En esta se realizan todo en la funcion, no entrada, no salida
float n1, r1;
printf("Introduce el numero que deseas elevar al cuadrado\n");
scanf("%f", &n1);
r1 = n1 * n1;
printf("f(%f)=x² es igual a: %f\n", n1, r1);

}

void cubo(float h){ //Se realizan las operaciones con h, la entrada, y hay una salida en la misma funcion
float r2;
r2 = h*h*h;
printf("f(%f)=x³ es igual a: %f\n", h, r2);

}

float cuatro(){ //En la funcion se realiza el escaneado de la entrada, y se arroja el resultado para que salga en la funcion main
float n3;
printf("Introduce el numero que deseas elevar a la cuarta\n");
scanf("%f", &n3);
return n3*n3*n3*n3;
}

float quin(float h){ //Se realizan las operaciones con h, la entrada, y se arroja el resultado hacia la funcion main
return h*h*h*h*h;
}
