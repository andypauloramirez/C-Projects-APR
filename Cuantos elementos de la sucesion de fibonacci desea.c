#include <stdio.h>
#include <stdlib.h>

/* Programa que al insertar un numero N genera los N primieros terminos de la sucesion de Fibonacci
La principal restriccion es que N > 1  */

int main() {
	
	int n, i, x=0, y=1, z=1;
	
	printf("\nDigite el numero de elementos que quiere de la serie Fibonacci:");
	scanf("%i", &n);


	if (n<=1){
		printf("\nError, el programa solo admite valores de N > 1");
	}
	
	for(i=2; i<=n; i++){
		
		z = x + y;
		x = y;
		y = z;
			
		
		printf("%i  ,  ", z);
	
	}
	
	return 0;
}
