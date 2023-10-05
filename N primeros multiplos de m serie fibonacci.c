//Programa que dados dos numeros N y M presenta los primeros N multiplos de M


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n,m,x,a,y,z;
	x=0;
	y=1;
	z=1;
	
	printf("Digite el multiplo: ");
	scanf("%d",&m);
	
	printf("Digite la cantidad de multiplos a buscar en la sucesion fibonacci: "); 
	scanf("%d",&n);
	
	
	if ((n>1)&&(m>=2))
	{
	printf("\nLos primeros %d multiplos de %d son:\n",n,m);
	
	while (a<=n)
		{
			z = x + z;
			x = y;
			y = z;
			
			if((z%m)== 0 ){	
			
			printf("\n %d",z);
			
			a= a + 1;
			
			}
		}
	}
	
		else if ((n<=1)&&(m<2))
	{
		printf("\nError, la cantidad de multiplos a buscar tienen que ser mayor que 1");
	}

	else if (n<=1)
	{
		printf("\nError, la cantidad de multiplos a buscar tienen que ser mayor que 1\n");
	}

	else if (m<2)
	{
		printf("\nError, el multiplo tiene que ser mayor o igual a 2\n");
	}	
	
	
	return 0;
}
