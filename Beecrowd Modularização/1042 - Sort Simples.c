#include <stdio.h>
#include <limits.h>

int main() {
 
    int A = 0, B = 0, C = 0;
    int minimo, meio, maximo;
    
    minimo = INT_MAX;
    maximo = INT_MIN;
    
    scanf("%d\n%d\n%d", &A,&B,&C);
    
    if(minimo > A)
    {
      minimo = A;
    }
    if(minimo > B)
    {
      minimo = B;
    }
    if(minimo > C)
    {
      minimo = C;
    }
    if(maximo < A)
    {
      maximo = A;
    }
    if(maximo < B)
    {
      maximo = B;
    }
    if(maximo < C)
    {
      maximo = C;
    }
    
    meio = A+B+C-maximo-minimo;
     
    printf("%d\n%d\n%d\n\n", minimo, meio, maximo);
    printf("%d\n%d\n%d\n", A, B, C);
 
    return 0;
}