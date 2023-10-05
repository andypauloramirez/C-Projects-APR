//Programa que imprime los primeros 20 multiplos de un numero usando la sentencia while

#include  <stdio.h>
#include <stdlib.h>

 int main(){

int r, t, i=1;

printf("\nDigite el numero que quiere para la tabla:"); 

scanf("%d", &t);
		


while (i<21){
		
	
	
	r = t * i;

	
	 printf("%d x %d = %d\n", t,i,r);
	 
	      	i++;
}
system("color  B");
system("pause");


return 0;



}
