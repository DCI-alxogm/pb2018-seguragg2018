#include<stdio.h>
#include<math.h>

int main(){

int es, p, b, n, x, a;
float integral, mul= 0, h=0, k;
FILE *var;
var=fopen("base.txt","r");
fscanf(var, "%i %i %i %i %f", &p, &a, &b, &n, &k);
es = (b - (a-1))/n;


fclose(var);

FILE *rar; 
rar = fopen("resultados.txt", "w");

for(int i=a;i<=b;i=i+es){
x = pow (i, p);

h = (i-a)/(k);

	for (int j= 1; j<k; j++){
	mul = mul + pow((a+k*h),p);
	
	}

integral = h * (((pow(a, p)+ pow (i, p))/2)+mul);
fprintf(rar, "%i elevado a la %i es igual a %i, y la integral es: %f\n",i, p, x, integral);


}
fclose(rar);
return 0;







}
