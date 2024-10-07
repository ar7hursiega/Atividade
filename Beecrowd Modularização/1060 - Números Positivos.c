#include <stdio.h>
 
int main() {
 
  double VALORES[6];
  int POSITIVO = 0;
  
   for(int i = 0; i < 6; i++)
   {
       scanf("%lf\n", &VALORES[i]);
       
        if(VALORES[i] > 0)
        {
           POSITIVO++;
        }
   }
   
   printf("%d valores positivos\n", POSITIVO);
       
    return 0;
}