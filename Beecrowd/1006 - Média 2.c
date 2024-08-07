#include <stdio.h>

#define P1 2
#define P2 3
#define P3 5
 
int main() {
 
    double A = 0.0, B = 0.0, C = 0.0, MEDIA = 0.0;
    
    scanf("%lf\n%lf\n%lf",&A,&B,&C);
    
    MEDIA = ((A*P1) + (B*P2) + (C*P3)) / 10;
    
    printf("MEDIA = %.1lf\n",MEDIA);
    
 
    return 0;
}