#include <stdio.h>
 
int main() {
 
    int num = 0;
    
    scanf("%d", &num);
    
    for(int i = 0; i <= num; i++)
    {
        if(i % 2 != 0 && i < 1000)
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}