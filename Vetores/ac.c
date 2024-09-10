#include <stdio.h>

int main()
{
    char NomeCliente[30] = "Fulano";
	char NomeCliente2[30] = {'F','U','L','A','N','O'};
    char NomeCliente3[] = "Fulano";

    printf("%s\n",NomeCliente);
	printf("%s\n",NomeCliente2);
	printf("%s\n",NomeCliente3);

	
	 return 0;
}