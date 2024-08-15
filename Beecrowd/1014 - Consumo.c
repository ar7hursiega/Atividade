#include <stdio.h>
 
int main() {
 
    int DISTANCIA = 0;
    double COMBUST = 0;
    double MEDIA = 0;
    
    scanf("%d\n%lf\n", &DISTANCIA, &COMBUST);
    
    MEDIA = DISTANCIA / COMBUST;
    
    printf("%.3lf km/l\n", MEDIA);
    
 
    return 0;
}