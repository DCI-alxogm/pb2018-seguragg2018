#include<stdio.h>

int main(){

float r;
int n=3, k, j;

for (j=0; j<n; j++){
	for(k=0; k<n; k++){
	r = j * k * 1.0;
	printf("%i %i %f\n", j, k, r);
	}

}

return 0;


}
