#include <stdio.h>

#define PI 3.14159
 
int main() {
 
    double RAIO = 0;
    double VOLUME = 0;
    
    scanf("%lf\n",&RAIO);
    
    VOLUME = (4.0/3) * PI * (RAIO * RAIO * RAIO);
    
    printf("VOLUME = %.3lf\n",VOLUME);
 
    return 0;
}