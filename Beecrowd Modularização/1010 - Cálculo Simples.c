#include <stdio.h>
 
int main() {
    
    int cod1 = 0, cod2 = 0, num1 = 0, num2 = 0;
    double  val1 = 0, val2 = 0;
    double  valtot = 0;
    
    scanf("%d\n%d\n%lf\n",&cod1,&num1,&val1);
    scanf("%d\n%d\n%lf\n",&cod2,&num2,&val2);
    
    valtot = (num1 * val1) + (num2 * val2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n",valtot);
 
    return 0;
}