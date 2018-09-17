#include<stdio.h>
#include<math.h>

int main(){

int es, p, b, n, k, r, a;
float integral, mul= 0, h;
FILE *var;
var=fopen("base.txt","r");
fscanf(var, "%i %i %i %i %i", &p, &a, &b, &n, &k);
es = ((b - (a-1))/n);


fclose(var);

FILE *rar;
rar = fopen("resultados.txt", "w");

for(int i=0;i<b;i++){
r = pow (a, p);

h = ((r-a)/k);
	for (int j= 1; j<k; j++){
	mul = mul + pow((a+k*h),p);
	
	}

integral = h * (((a+r)/2)+mul);
fprintf(rar, "%i elevado a la %i es igual a %i, y la integral es: %f\n",a, p, r, integral);
a= a+es;

}
fclose(rar);
return 0;







}
