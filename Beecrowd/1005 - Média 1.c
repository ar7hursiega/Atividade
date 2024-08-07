#include <stdio.h>
 
int main() {
 
    double A = 0.0;
    double B = 0.0;
    double P1 = 3.5;
    double P2 = 7.5;
    double MEDIA = 0.0;
    
    scanf("%lf\n%lf",&A,&B);
    
    MEDIA = ((A*P1) + (B*P2)) / 11;
    
    printf("MEDIA = %.5lf\n",MEDIA);
 
    return 0;
}