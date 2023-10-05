#include <stdio.h>
#include <stdlib.h>

/* Programa que suma todos los numeros enteros desde el 1 al 100 usando la sentencia do...while  */

int main() {
	
	
	int i, n=100, s=0;
	
	printf("Para sumar todos los numeros naturales del 1 al 100,escribe 100:");
	scanf("%i",&n);
	
	i=1;
	
	
	
		do {
			
				s += i; 
				i++; 
		}	
		while (i<=n);{
	
}
	printf("\n\nEl resultado de la suma es: %i", s);
	
	printf("\n");
	system("pause");
	
	return 0;
}
