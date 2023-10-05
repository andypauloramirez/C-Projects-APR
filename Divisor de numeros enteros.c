
/* Programa: División entera con restas sucesivas */

#include <conio.h>
#include <stdio.h>

int main()
{
    int cociente, divid, divis, residuo;

    printf( "\n   Introduzca dividendo (entero): " );
    scanf( "%d", &divid );
    printf( "\n   Introduzca divisor (entero): " );
    scanf( "%d", &divis );

    if ( divid > 0 && divis > 0 )
    {
        cociente = 0;
        residuo = divid;

        while ( residuo >= divis )
        {
            residuo -= divis;
            cociente++;
        }

        printf( "\n   %d / %d = %d ( Residuo = %d )", divid, divis, cociente, residuo );
    }
    else
        printf( "\n   ERROR: Ambos numeros deben ser mayores que cero.");


    return 0;

}


