#include <stdio.h>
#include <math.h> 

int main() {
 
    double x1 = 0;
    double y1 = 0;
    double x2 = 0;
    double y2 = 0;
    double distancia = 0;
    
    scanf("%lf\n%lf\n%lf\n%lf\n", &x1,&y1,&x2,&y2);
    
    distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    
    printf("%.4lf\n", distancia);
    
    return 0;
}