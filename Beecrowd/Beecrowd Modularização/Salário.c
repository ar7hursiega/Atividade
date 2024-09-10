#include <stdio.h>
 
int main() {
 
    int num = 0, horas = 0;
    double valhora = 0.0, salario = 0.0;
    
    scanf("%d\n%d\n%lf\n", &num,&horas,&valhora);
    
    salario = valhora * horas;
    
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", num, salario);
    
    return 0;
}