

#include <stdio.h>
#include <conio.h>
//Programa que dados dos numeros enteros positivos determina el producto de ellos y los presenta 
//en sumas sucesivas usando ciclo while anidado en un if dentro de otro if
int main() {
	
	int i, ent1, ent2, res;
	
	printf("Ingrese el primer numero entero:");
	scanf("%d", &ent1);
	
	printf("\nIngrese el segundo numero entero:");
	scanf("%d", &ent2);
	
	if (ent1 >= 0 && ent2 >=0){
		
			res=0;
			
			if(ent2 != 0){
				
				i=1;
				while(i <= ent1){
					
					res+= ent2;
					i++;
					
				}
			}
				printf("\n El producto en sumas sucesivas es = %d", res );	
	}
	else 
				printf("\nLos valores insertados deben ser mayores o iguales que 0");
			

return 0;	
		
	}


