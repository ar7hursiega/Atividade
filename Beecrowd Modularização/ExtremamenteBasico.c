#include<stdio.h>

int soma(int A, int B);
 
int main() {
 
    int A = 0;
    int B = 0;
    int X = 0;
    
    scanf("%d\n%d",&A,&B);
    
    X = soma(A,B);
    
    printf("X = %d\n",X);
 
    return 0;
}

int soma(int A, int B) {
    
    int X = 0;
    
    X = A + B;
    
    return(X);
}