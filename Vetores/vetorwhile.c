#include <stdio.h>

int main()
{

char NOME[5];
int i = 0; 
 
 scanf("%s", NOME);
 
  while(NOME[i] != '\0')
  {
     printf("%c", &NOME[i]);
	 i++;
	 
  } 
	 return 0;
}