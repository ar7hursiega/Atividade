#include <stdio.h>
 
int main() {
 
    int tempo = 0;
    int segundos, minutos, horas;
    
    scanf("%d", &tempo);
    
    horas = tempo / 3600;  
    minutos = (tempo % 3600) / 60;
    segundos = tempo % 60;
    
    printf("%d:%d:%d\n", horas, minutos, segundos);
    
    return 0;
}