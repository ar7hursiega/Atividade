#include <stdio.h>
 
#define PI 3.14159

    int main() {
 
    double A = 0;
    double B = 0;
    double C = 0;
    
    double triangulo_retangulo = 0;
    double circulo = 0;
    double trapezio = 0;
    double quadrado = 0;
    double retangulo = 0;
    
    scanf("%lf\n%lf\n%lf\n", &A,&B,&C);
    
    triangulo_retangulo = (A * C) / 2;
    
    circulo = PI * (C * C);
    
    trapezio = ((A + B) * C) / 2;
    
    quadrado = B * B;
    
    retangulo = A * B;
    
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo_retangulo, circulo, trapezio, quadrado, retangulo);
    
    
    return 0;
}