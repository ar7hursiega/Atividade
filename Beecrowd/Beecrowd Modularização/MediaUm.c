#include <stdio.h>

double calculemedia(double A, double B);
 
int main() {
    double VA = 0.0, VB = 0.0;
    double NA = 3.5, NB = 7.5;
    double MEDIA = 0.0;
    
    scanf("%lf\n%lf",&VA,&VB);
    
    MEDIA = calculemedia(VA,VB);
    
    printf("MEDIA = %.5lf\n",MEDIA);
    
    return 0;
}

double calculemedia(double A, double B) {
    
    double X = 0.0;
    
    X = ((A * 3.5) + (B * 7.5)) / 11;
    
    return(X);
}
    
    
