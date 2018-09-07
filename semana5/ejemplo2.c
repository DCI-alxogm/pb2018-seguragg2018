#include<stdio.h>
#include<math.h>

int main()
{

//Se declaran tres variables, una tipo float para los resultados y dos tipos int para el contador del ciclo for

	float e;
	int n=10, j;

//Se utiliza un ciclo for para determinar la funcion exp, se imprime el valor y se reinicia el ciclo

	for(j=0;j<n;j++){
	e = exp(j);
	printf("%i \t %f\n", j, e);

}

return 0;







}
