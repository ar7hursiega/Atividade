#include <stdio.h>

double FuncSOMA(double A, double B);

int main() {
	
	int ENTRADA = 0;
	int D = 0, E = 0;
	double A = 0.0, B = 0.0, C = 0.0;

  do
  {
	  
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
	  case 1:
	   printf("Digite o primeiro numero:\n");
	   scanf("%lf",&A);
	   printf("Digite o segundo numero:\n");
	   scanf("%lf",&B);
	   C = FuncSOMA(A,B);
	   printf("O resultado e: %.5lf\n", C);
	  break;
	}  
  }while(ENTRADA != 0);
  
  return(0);

}

double FuncSOMA(double A, double B) {

 double X = 0.0;
 
  X = A + B;

 return(X);
}



