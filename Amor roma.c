#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	
	int numero;
	int inverso [5];
	float x,y;
	float resultado;
	int numero2 [4];
	
	for (numero=1000;numero<=5000;numero++)
	{
		
	
	inverso [0] = numero % 10;
	inverso [1] = ((numero - inverso[0])/10)%10;
	inverso [2] = ((numero - inverso [1])/100)%10;
	inverso [3] = ((numero - inverso [3])/1000)%10;
	
	
	numero2 [0] = inverso [3];
	numero2 [1] = inverso [2];
	numero2 [2] = inverso [1];
	numero2 [3] = inverso [0];
	
	
	inverso [0] = inverso [0] * 1000;
	inverso [1] = inverso [1] * 100;
	inverso [2] = inverso [2] * 10;
	
	
	inverso [4] = inverso [0] + inverso [1] + inverso [2] + inverso [3];

	
	resultado = inverso [4]/numero;
    
    if((inverso [4]%numero)==0) 
    {
    
    if (resultado!=1) 
    {
	

	if ((numero2 [0] != resultado) && (numero2 [1] != resultado) && (numero2 [2] != resultado) && (numero2 [3] != resultado)) 
	
	{
		printf("\n %d x %.0f = %d",numero,resultado,inverso[4]); 
	}
	
	}
	}
	}
	return 0;
}