#include <stdio.h>
 
 int diferenca(int A, int B, int C, int D);
 
int main() {
 
    int A = 0, B = 0, C = 0, D = 0, DIFERENCA = 0;
    
    scanf("%d\n%d\n%d\n%d",&A,&B,&C,&D);
    
    DIFERENCA = diferenca(A,B,C,D);
    
    printf("DIFERENCA = %d\n",DIFERENCA);
 
    return 0;
}

int diferenca(int A, int B, int C, int D) {
    
    int X = 0;
    
    X = ((A * B) - (C * D));
    
    return(X);
}