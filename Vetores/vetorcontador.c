#include <stdio.h>

int main()
{
  char NOME[50];
  int indice = 0;
  int quant = 0;
  
  scanf("%s", NOME);
  
    while(NOME[indice] != '\0')
	{
	    quant++;
		indice++;
	}

     printf("A quantidade de caracteres eh: %d", quant); 

	 return 0;
}