/* Creado el 20 de agosto by Guillermo Segura */


#include <stdio.h>
#include <math.h>

int main () {

/* Declaras las variables tipo float*/

float x, y, z, r, q, o, x1, y1, z1;

printf("Este programa convierte coordenadas cartesianas a esfericas y viceversa\n");
printf("Introduce en orden x, y, z las coordenadas cartesianas\n");

/* Escaneas las variables en orden */
scanf("%f",&x);
scanf("%f",&y);
scanf("%f",&z);

/*Aplicas las formulas */

r=sqrt((x*x)+(y*y)+(z*z));
q= acos(z/r);
o= atan(y/x);
/* Imprimes los resultados */
printf("Los resultados estan en orden r, teta, fi\n");
printf("%f\n", r);
printf("%f\n", q);
printf("%f\n", o);
/* Vuelves a convertir lo otro */

printf("Ahora, convertira los resultados a coordenadas cartesianas \n");
x1=r*sin(q)*cos(o);
y1=r*sin(q)*sin(o);
z1=r*cos(q);

/* Arrojas los resultados finales, de coordenadas cartesianas */
printf("Los resultados estan en orden x, y, z\n");
printf("%f\n", x1);
printf("%f\n", y1);
printf("%f\n", z1);


return 0;












}
