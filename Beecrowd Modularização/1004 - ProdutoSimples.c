#include <stdio.h>
 
 int multiplique(int A, int B);
 
int main() {
  int PROD = 0;
  int A = 0, B = 0;
  
  scanf("%d\n%d",&A,&B);
  
  PROD = multiplique(A,B);
    
  printf("PROD = %d\n",PROD);
 
    return 0;
}

 int multiplique(int A, int B) {
     
     int X = 0;
     
     X = A * B;
     
     return(X);
 }
 