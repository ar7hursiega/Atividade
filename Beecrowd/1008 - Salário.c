#include <stdio.h>
 
int main() {
 
    int NUM = 0, HORAS = 0;
    double SALARIO = 0.0, VALHORA = 0.0;
    
    scanf("%d\n%d\n%lf",&NUM,&HORAS,&VALHORA);
    
    SALARIO = (HORAS*VALHORA);
    
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",NUM,SALARIO);
 
    return 0;
}