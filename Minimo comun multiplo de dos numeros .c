#include <stdio.h>
#include <stdlib.h>

/* Programa que calcula el Minimo Comun Multiplo de dos numeros */

// La formula utilizada para hacer el calculo del MCM es:

//	MCM (A,B)=    A*B/MCD (A,B) //donde MCD es el Maximo comun Divisor			               



int main() {
	
	int a, b, prod, mcm, mcd, resto ;
	
	printf("Ingrese el valor de A: ");
	scanf("%d", &a);
	
	printf("\nIngrese el valor de B: ");
	scanf("%d", &b);
	
	prod= a * b;
	
	
	
	//Aqui abro mi bucle do..while para hacer el calculo del MCD
	
	do{
		
		resto= a % b;
		
		if(resto != 0)
		{
			a = b;
			b = resto;
		}
		else {
			mcd = b;
		}
   	}
   	while (resto != 0);{
   		
		   mcm = prod / mcd;
   		
	   }
		printf("\nEl Maximo Comun Multiplo es: %d", mcm);
	
	return 0;
}
