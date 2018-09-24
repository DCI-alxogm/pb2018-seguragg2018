#include<stdio.h>
#include<math.h>

int main(){
double x, y, z, vx, vy, vz;
float h=.0001;

FILE *leer;
leer=fopen("base.txt", "r");
fscanf(leer, "%d %d %d %d %d %d", &x, &y, &z, &vx, &vy, &vz);
fclose(leer);
r = sqrt(pow(x,2)+pow(y,2)+pow(z,2));

FILE *esc;
esc = fopen("mercurio.dat", "w");

fprintf(esc, "Posicion         Velocidad\n");
fprintf(esc, "%d %d %d %d %d %d", x, y, z, vx, vy, vz);

for (int i=0;i<10;i++){
x = x + vx * h;
y = y + vy * h;
z = z + vz * h; 

vx = vx - h * ((4*3.1416*x)/(pow(r, 3)));
vy = vy - h * ((4*3.1416*y)/(pow(r, 3)));
vz = vz - h * ((4*3.1416*z)/(pow(r, 3)));

fprintf(esc, "Posicion         Velocidad\n");
fprintf(esc, "%d %d %d %d %d %d\n", x, y, z, vx, vy, vz);

}
fclose(esc);
return 0;



}
