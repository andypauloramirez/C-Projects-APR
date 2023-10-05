#include <stdio.h>
#include <stdlib.h>

/* Programa que imprime los primeros 20 multiplos de un numero dado usando do...while  */

int main() {
	
	int t, i=1;
	
	printf("Digite el numero que quiere para la tabla:");
	scanf("%d", &t);
	
	do{
			
		printf("%d x %d = %d\n", t, i, t*i);
		i++;
		
	}while(i<21);{
	
	}
	system("color E");
	system ("pause");
	
	return 0;
}
