#include <stdio.h>
#include <stdlib.h>

/* Programa que suma los numeros enteros del 1 al 100 utilizando while*/

int main() {
	
	int i, n=100, s=0;
	
	printf("Para sumar todos los numeros naturales del 1 al 100,escribe 100:");
	scanf("%i",&n);
	i=1;
	
while (i<=n){
	
	s += i; 
	i++; 
}
	printf("El resultado de la suma es: %i", s);
	return 0;   
}




