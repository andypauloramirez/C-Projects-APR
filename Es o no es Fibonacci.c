#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* Programa que determina si un numero es o no es perteneciente a la sucesión de Fibonacci */

int main() {
	
	int n, i, resultado, x, y;
	
	x=1;
	y=1;
	
	printf("Digite el numero:");
	scanf("%d", &n);
	
	for(i=2; i<=n;i++){
		
		resultado = x + y;
		x=y;
		y=resultado;
	
		if (n==resultado)
		{
			
			printf("El numero si pertenece a la sucesion Fibonacci");
		}
		else{
			printf("El numero no pertenece a la sucesion de Fibonacci");
		}
	
	}
	
		
	return 0;
}


