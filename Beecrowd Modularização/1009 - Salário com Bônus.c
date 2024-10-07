#include <stdio.h>
 
int main() {
 
    char NOME[50];
    double SAL_FIXO = 0;
    double VENDAS = 0;
    double TOTAL = 0;

    
    scanf("%s\n",&NOME);
    scanf("%lf\n%lf\n",&SAL_FIXO,&VENDAS);
    
    TOTAL = SAL_FIXO + (VENDAS * 0.15);
    
    printf("TOTAL = R$ %.2lf\n",TOTAL);
 
    return 0;
}