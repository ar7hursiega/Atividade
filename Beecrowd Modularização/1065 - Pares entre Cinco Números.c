#include <stdio.h>
 
int main() {
 
    int num[5];
    int qtd = 0;
    
     for(int i = 0; i < 5; i++)
    {
      scanf("%d\n", &num[i]);
      
          if(num[i] % 2 == 0)
          {
              qtd++;
          }
      
    }
    
    printf("%d valores pares\n", qtd);
    
 
    return 0;
}