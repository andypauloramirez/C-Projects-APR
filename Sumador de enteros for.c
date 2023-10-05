#include <stdio.h>
#include <stdlib.h>

//Programa que muestra el resultado de la suma de los numeros enteros 
//desde el 1 al 100 usando la sentencia o ciclo for

int main() {
	
	int i, n=100, s=0;
	
	
	printf("Para sumar todos los numeros naturales del 1 al 100, escribe 100:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
	
		s = s + i;	
	}
	
	printf("\nEl resultado de la suma es: %d",s); 
	
	printf("\n");
	
	system("pause");
	return 0;
}
