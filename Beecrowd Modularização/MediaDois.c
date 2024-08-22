#include <stdio.h>
 
#define P1 2
#define P2 3
#define P3 5
 
 double calculemediadois(double A, double B, double C);
 
int main() {
 
    double A = 0.0, B = 0.0, C = 0.0, MEDIA = 0.0;
    
    scanf("%lf\n%lf\n%lf",&A,&B,&C);
 
    MEDIA = calculemediadois(A,B,C);
    
    printf("MEDIA = %.1lf\n",MEDIA);
 
    return 0;
}
double calculemediadois(double A, double B, double C) {
    
    double X = 0.0;
    
    X = ((A * P1) + (B * P2) + (C * P3)) / 10;
    
    return(X);
}