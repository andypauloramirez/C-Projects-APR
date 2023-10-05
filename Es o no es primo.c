#include <stdio.h>
#include <stdlib.h>

/*Programa que a partir de un numero N determina si es primo o no es primo */

int main() {
	
	int i, n, t=0;
	
	printf("Digite el numero :");
	scanf("%i", &n);
	
	for(i=1; i<=n; i++){
		
		if(n%i==0){
			t++;
		}
	}
	
	if (t>2){
		printf("\nEl numero no es primo");
	}
		else{
			printf("\nEl numero es primo");
		}
	
	return 0;
}
