#include <stdio.h>

#define PI 3.14159

double multiplica(double A, double B);

int main() {
 
 double area = 0.0;
 double raio = 0.0;
 double raioq = 0.0;
 
 scanf("%lf",&raio);
 
 raioq = multiplica(raio,raio);
 area = multiplica (PI,raioq);
 
 printf("A=%.4lf\n",area);
 
    return 0;
}

 double multiplica(double A, double B) {
 
 double X = 0.0;
 
 X = A * B;

    return(X);
}