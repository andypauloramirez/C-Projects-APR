

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    int A, B, res, mcd;
    
    printf("Digite el primer numero: ");
    scanf("%d", &A);
    
    printf("digite el segundo numero: ");
    scanf("%d", &B);
    
    do{
    
        res = A % B;
        if (res != 0){
            A = B;
            B = res;
        }
        else {
          mcd = B; 
        }
    }
    while (res != 0);
    
    printf("El MCD es: %d\n", mcd);
    
    
    return (EXIT_SUCCESS);
}

