/* Creado el 20 de agosto by Guillermo Segura*/
/* Usas la libreria math.h*/
#include <stdio.h>
#include <math.h>

int main() {
/*Declaras las variables tipo float*/

float  x, y1, y2, y3;


printf("Este es un programa que realiza operaciones\n");
printf("El programa evalua algunas funciones\n");
printf("Escribe un valor para la variable x\n");
/* Con un scanf, introduces la variable x*/

scanf("%f",&x);
/* Realiza las operaciones */

y1= exp(-x);
y2= cos(x/57.2957)+2*tan((x/2)/57.2957);
/* Ya que la computadora realiza las opecaiones en radianes, conviertes a radianes los grados sobre la marcha*/
y3= log(x) + 3*(x*x);

printf("Los resultados de las opeciones son:\n");
printf("y = %f \n",y1);
printf("y = %f \n",y2);
printf("y = %f \n",y3);
/* Arroja los resultados y listo*/
return 0;


}
