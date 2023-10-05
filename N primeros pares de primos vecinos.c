/*
 Hacer un programa que reciba un numero N desde el teclado
 En base a dicho numero, presente los primeros N pares de primos vecinos a partir de 3
*/
#define CIERTO 1
#define FALSO  0

#include <stdio.h>
#include <stdlib.h>

int N; // Cantidad de primos vecinos
int i,j,k;

void main()
{
	printf (" Programa que calcula los primeros N Primos vecinos \n");
	printf (" Valor de N  : "); scanf("%d", &N);
	
	i    = 0;
	j    = 5;
	while (i < N)
	{
		if (fnPrimo(j) == CIERTO)
		{
			k = j + 2;
			if (fnPrimo(k))
			{
				i++;
				printf ("Secuencia de primo # %3d     Valores  %4d  ,  %4d \n",i,j,k);
			}
		}
		j = j + 2;
	}
	return;
}

int  fnPrimo(int piValor)
{
    int liFlag,liCnt, liRes;
	int liRet;

	liFlag = CIERTO;

	// Validacion
	if (piValor <= 0) liRet = -1;
	else 
	{
		if (piValor <= 3) 	liRet = 1; 
		else
		{
		 	liCnt = 2;
			while ((liFlag == CIERTO) && (liCnt <= (piValor /2 )))
			{
				liRes = piValor % liCnt;
				liCnt++;
				if (liRes == 0) liFlag = FALSO;
			}
			liRet = liFlag;
		}	
	}
	return liRet; 
}



