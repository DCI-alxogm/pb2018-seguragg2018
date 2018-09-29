//Programa creado por Guillermo Segura Gomez
//Editado el 29/09/2018
#include<stdio.h>
#include<math.h>

int main(){
//Primero se declaran las variables

//Se usan de tipo double para las posiciones y las velocidades de los planetas, tambien se usan para la masa del planeta, la masa de la estrella, el tiempo total y la evolucion del tiempo
double r, x, y, z, vx, vy, vz, mp, me, t, h; 

//Se declara un arreglo de caracteres para el nombre de los planetas y asi crear los archivos correspondientes
char nombre[20];

//Se declara una variable entera para dar el numero de planetas y por lo tanto el numero de ciclos que se haran
int n;

//Se declara una variable para leer el documento donde se encuentra la informacion del lugar en donde estan los planetas
FILE *leer;
leer=fopen("base.txt", "r");
fscanf(leer, "%i", &n); //Se lee el numero de planetas, el numero de veces que se hara el ciclo

for (int i=0; i<n; i++){

fscanf(leer, "%s", nombre); 
//Se lee el nombre del planeta y se le asigna la variable tipo char
fscanf(leer, "%lf %lf %lf %lf %lf %lf", &x, &y, &z, &vx, &vy, &vz); 
//Se leen las posiciones y velocidades iniciales
fscanf(leer, "%lf %lf %lf %lf",&mp ,&me, &t, &h);
//Se lee la masa del planeta, la masa de la estrella, el tiempo total, y el paso del tiempo

//Se convierten las velocidades a años, ya que las velocidades se encuentran en dias 
vx = vx * 365.2425;
vy = vy * 365.2425;
vz = vz * 365.2425;

//Se declara una nueva variable tipo FILE, pero esta vez para escribir
FILE *esc;
esc = fopen(nombre, "w"); 
//Se crea un archivo con el nombre del planeta, este proceso se realiza n veces, donde n es el numero de planetas, por lo tanto se crearan n archivos con los datos obtenidos por los calculos, y estos archivos tendran cada uno el nombre de sus respectivos planetas ya que se inicializan las variables para escribir, y por lo tanto los archivos seran diferentes 

//Se imprime las posiciones y velocidades iniciales
fprintf(esc, "Posicion                     Velocidad\n");
fprintf(esc, "%f, %f, %f, %f, %f, %f\n",x, y, z, vx, vy, vz);


//Se realiza el metodo de Euler, que consiste en sumar al contador j, intervalos de tiempo h hasta llegar al tiempo total t, y mientras ir calculando los puntos

	for (double j=0.0;j<t;j = j + h){
	r = sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	x = x + vx * h;
	y = y + vy * h;
	z = z + vz * h; 

	vx = vx - h * ((4*3.14159265358*3.14159265358*x)/(pow(r, 3)));
	vy = vy - h * ((4*3.14159265358*3.14159265358*y)/(pow(r, 3)));
	vz = vz - h * ((4*3.14159265358*3.14159265358*z)/(pow(r, 3)));

	//Se imprimen los puntos calculados y se reinicia el ciclo, para calcular nuevos puntos
	fprintf(esc, "%f, %f, %f, %f, %f, %f\n", x, y, z, vx, vy, vz);

	}

//Se cierra la variable de escritura, para cuando se reinicie el ciclo, se abra una nueva variable y se escriba en un nuevo archivo
fclose(esc);


}

//Se cierra la variable de lectura
fclose(leer);

return 0;
}


