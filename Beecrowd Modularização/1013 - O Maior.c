#include <stdio.h>
#include <stdlib.h>

 
int main() {
 
    int A = 0;
    int B = 0;
    int C = 0;
    int MAIORAB = 0;
    int MAIORABC = 0;
    
    scanf("%d\n%d\n%d\n", &A,&B,&C);
    
    MAIORAB = ((A + B) + abs(A - B)) / 2;
    MAIORABC = ((MAIORAB + C) + abs(MAIORAB - C)) / 2;
    
    printf("%d eh o maior\n", MAIORABC);
 
    return 0;
}