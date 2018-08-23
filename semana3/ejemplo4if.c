#include <stdio.h>

int main(){

char c;
int may, min;

//El programa te dice si una letra es vocal o consonante

printf("Introduce una letra: \n");
scanf("%c", &c);
//Escanea un cararter, para eso usamos el tipo de variable char
min = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
may = (c == 'A' || c == 'E' || c == 'O' || c == 'I' || c == 'U');
//Declaras dos variables tipo int, y haces que esas variables en todos los casos posibles sean iguales a una vocal, ya sea mayuscula o minuscula

//Haces una condicion que te diga si es igual a las variables may o min, que son las de las vocales, usas la condicional (||) que quiere decir o
if (may || min)
{
printf("%c es una vocal\n", c);
//Si son iguales, quiere decir que es una vocal
}
else
{
printf("%c es consonante\n", c);
//Si no es igual a la condicion entonces es una consonante 
}
return 0;

}
