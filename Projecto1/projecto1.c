#include<stdio.h>
#include<math.h>

int main(){
double r, x, y, z, vx, vy, vz, me, t, h, j=0.0;
char nombre[20];
int n;

FILE *leer;
leer=fopen("base.txt", "r");
fscanf(leer, "%i", &n);

for (int i=0; i<n; i++){
fscanf(leer, "%s", nombre);
fscanf(leer, "%lf %lf %lf %lf %lf %lf", &x, &y, &z, &vx, &vy, &vz);
fscanf(leer, "%lf %lf %lf", &me, &t, &h);

vx = vx * 365.2425;
vy = vy * 365.2425;
vz = vz * 365.2425;

FILE *esc;
esc = fopen(nombre, "w");
fprintf(esc, "Posicion                     Velocidad\n");
fprintf(esc, "t=%f, %f, %f, %f, %f, %f, %f\n",j, x, y, z, vx, vy, vz);

	for (j=0.0;j<t;j = j + h){
	r = sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	x = x + vx * h;
	y = y + vy * h;
	z = z + vz * h; 

	vx = vx - h * ((4*3.14159265358*3.14159265358*x)/(pow(r, 3)));
	vy = vy - h * ((4*3.14159265358*3.14159265358*y)/(pow(r, 3)));
	vz = vz - h * ((4*3.14159265358*3.14159265358*z)/(pow(r, 3)));

	fprintf(esc, "t=%f, %f, %f, %f, %f, %f, %f\n",j, x, y, z, vx, vy, vz);

	}
fclose(esc);


}
fclose(leer);

return 0;
}


