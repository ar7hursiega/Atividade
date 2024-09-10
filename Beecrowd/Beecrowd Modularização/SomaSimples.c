#include <stdio.h>
 
 int somar(int A, int B);
 
int main() {
    
    int A = 0, B = 0, SOMA = 0;
    
    scanf("%d\n%d",&A,&B);
    
    SOMA = somar(A,B);
 
    printf("SOMA = %d\n",SOMA);
 
    return 0;
}

int somar(int A, int B) {
    int X = 0;
    
    X = A + B;
    
    return(X);
}