


//Programa que calcula el factorial de un numero N usando funciones recursivas 

#include <stdio.h>
#include <stdlib.h>

   int factorial (int n){
    if(n<1){
       return 0;}
        else if (n==1){
       return 1;}
        else {
       return n * factorial(n - 1);
     }
   
   }
   
int main(int argc, char** argv) {
    int n, res;
 
    
    printf("Digite un numero: ");
    scanf("%d",&n);
    res = factorial(n);
    
    printf("El factorial %d es: %d\n", n, res);
    
    return 0;
}

