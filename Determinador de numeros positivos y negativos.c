/*
 Escribir un programa que capture un conjunto de valores numericos
 El programa terminara cuando se introduzca el valor 0
 Al finalizar la captura, escribir:
   - Cuantos valores fueron positivos
   - Cuantos valores fueron negativos
*/

#include <stdio.h>
#include <stdlib.h>

int n;
int numpos, numneg;

int main()
{
	n = 1;
	while (n != 0)
	{
		printf ("Siguiente valor : "); scanf("%d",&n);
		if (n > 0) numpos++;
		if (n < 0) numneg++;
	}
	printf ("\n Total valores positivos  : %d",numpos);
	printf ("\n Total valores Negativos  : %d",numneg);

	system("pause");

	return 0;
}

