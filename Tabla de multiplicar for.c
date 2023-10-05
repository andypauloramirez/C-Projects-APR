#include <stdio.h>
#include <stdlib.h>

/* Programa que imprime la los primeros 20 multiplos de un numero dado */

int main() { //t=tabla, r=resultado, i=contador
	
	int i, r, t;
	
	printf("Digite el numero que quiere para la tabla: ");
	scanf("%i", &t);
	
	for(i=1; i<21; i++){
		
		r = t * i;
		
		printf("%2d x %2d = %3d\n", t,i,r);
	}
		system ("color c");
	system("pause");

	
	
	return 0;
}
