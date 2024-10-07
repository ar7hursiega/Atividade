#include <stdio.h>
 
int main() {
 
    int a = 0;
    int impar = 0;
    
    scanf("%d", &a);
    
    for(int i = 0;i < 12;i++)
    {
        if(a % 2 != 0)
        {
            printf("%d\n", a);
            
        }
        a++;
    
    }
    return 0;
}