#include <stdio.h>
#include <stdlib.h>

/* Programa que dada una cifra de numeros presenta el invertido del mismo */

int main() {
	int a, b, inv, num;
	
	printf("\nIngrese el numero a invertir:");
	scanf("%d", &num);
	
	while(num != 0)
	{
		
	a = num%10;
	b = num/10;
	inv = inv*10+a;
	num = b;	 	
	}
	
	printf("\nEl numero invertido es: %d", inv);
	

	return 0;
}
