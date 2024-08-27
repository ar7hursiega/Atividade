#include <stdio.h>

int FuncPOTENCIACAO(int B, int E);

int main() {
	
	int ENTRADA = 0;
	int A = 0, B = 0;
    int C = 0;

  printf("0. Sair;\n");
  printf("1. Soma;\n");
  printf("2. Subtracao;\n");
  printf("3. Multiplicacao;\n");
  printf("4. Divisao;\n");
  printf("5. Potenciacao;\n");
  printf("6. Raiz Quadrada;\n");
  printf("7. Fatorial;\n");
  printf("8. MDC;\n");
  printf("9. MMC;\n");
  printf("10. Equacao de Segundo Grau;\n");
  printf("ESCOLHA UMA OPCAO: \n");
  
  scanf("%d",&ENTRADA);
  
  switch(ENTRADA) {
	  case 5:
	   printf("Digite o primeiro numero:\n");
	   scanf("%d",&A);
	   printf("Digite o segundo numero:\n");
	   scanf("%d",&B);
	   C = FuncPOTENCIACAO(A,B);
	   printf("O resultado e: %d", C);
	  break;
	}  
  
  return(0);

}

int FuncPOTENCIACAO(int B, int E) {
	
	int x =1;
	for(int i = 1; i <= E; i++)
	{
		x *= B;
	}

	return (x);
}

