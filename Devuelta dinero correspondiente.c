/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: administrador
 *
 * Created on 20 de septiembre de 2019, 07:49 PM
 */

//#include <stdio.h>
//#include <stdlib.h>

/*
 * 

int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}
 */

/*
 * Programa que calcula la devuelta en de dinero correspondiente ingresando el
 * pago y el consumo por teclado
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    
    int dinero[11] = {1,5,10,20,25,50,100,200,500,1000,2000}; //Tipos de billetes en RD
    int devuelta,monto,pago,i,billetes;
    char bucle;
	
do
{
    printf ("\n Monto a pagar: ");
    scanf("%d",&monto);
	
    printf (" Billete con que paga: ");
    scanf("%d",&pago);
    
        if ((monto <= pago) && ((monto>0) && (pago>0)))
   
    {
	devuelta = pago - monto; 
	
    printf ("Le sobran = %d \n",devuelta);
	

	for (i=10; i>=0; i--)
    {
    	
    	billetes  = devuelta / dinero[i];
    	
    	devuelta = devuelta % dinero[i];
    	
	    if (billetes != 0) 
		{			
		printf ("\n %d X (%d pesos)\n",billetes,dinero[i]);
		}
    }
	}
	
	else if ((monto>0) || (pago>0))
	{
		printf("\nError, los datos introducidos tienes que ser mayor que 0");
	}
	
	else 
	{
		printf("\nError el monto a pagar debe ser menor al dinero con que se paga");
	}
	

                printf( "\n   %cDesea convertir otro monto (s/n)?: ", 168 );
                fflush( stdin ); 
                scanf( "%c", &bucle );		

} 

while (bucle != 'n');  
	
    return 0;
}
