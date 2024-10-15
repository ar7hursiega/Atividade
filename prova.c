#include <stdio.h>

 int main() {
 
  //declaração de vetor;
  int num[11];
  int somapares = 0;
  int somaimpares = 0;
  
   printf("INSIRA 10 VALORES:\n");
  
  //leitura de valores;
    for(int i = 0; i < 10; i++) 
	{
		scanf("%d", &num[i]);
	}
	
  //verificação dos valores pares;
  
    printf("\nNUMEROS PARES: ");
  
    for(int i = 0; i < 10; i++) 
	{
		if(num[i] % 2 == 0)
		{
			printf("%d ", num[i]);
		}
		
	}
	
	//verificação dos valores ímpares;
  
    printf("\nNUMEROS IMPARES: ");
  
    for(int i = 0; i < 10; i++) 
	{
		if(num[i] % 2 != 0)
		{
			printf("%d ", num[i]);
		}
		
	}
	
	//soma dos valores pares;
  
    printf("\nSOMA DOS NUMEROS PARES: ");
  
    for(int i = 0; i < 10; i++) 
	{
	  if(num[i] % 2 == 0)
		{
			somapares += num[i];
		}	
	}
	   printf("%d\n", somapares);
	   
	 //soma dos valores impares;
  
    printf("SOMA DOS NUMEROS IMPARES: ");
  
    for(int i = 0; i < 10; i++) 
	{
	  if(num[i] % 2 != 0)
		{
			somaimpares += num[i];
		}	
	}
	   printf("%d\n", somaimpares);
	
 
  return 0;
 }
 