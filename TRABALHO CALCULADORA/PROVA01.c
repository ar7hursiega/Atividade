#include <stdio.h>

double FuncSOMA(double A, double B);
double FuncSUBTRACAO(double A, double B);
double FuncMULTIPLICACAO(double A, double B);
double FuncDIVISAO(double A, double B);
double FuncPOTENCIACAO(double B, int E);
double FuncRAIZ(double A);
int FuncFATORIAL(int A);
void funcEQUACAO(double A, double B, double C);

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
	  case 0:
	   return(0);
	  break;
	  case 1:
	   printf("Digite o primeiro numero:\n");
	   scanf("%lf",&A);
	   printf("Digite o segundo numero:\n");
	   scanf("%lf",&B);
	   C = FuncSOMA(A,B);
	   printf("O resultado e: %.5lf\n\n", C);
	  break;
	  case 2:
	   printf("Digite o primeiro numero:\n");
	   scanf("%lf",&A);
	   printf("Digite o segundo numero:\n");
	   scanf("%lf",&B);
	   C = FuncSUBTRACAO(A,B);
	   printf("O resultado e: %.5lf\n\n", C);
	  break;
	  case 3:
	   printf("Digite o primeiro numero:\n");
	   scanf("%lf",&A);
	   printf("Digite o segundo numero:\n");
	   scanf("%lf",&B);
	   C = FuncMULTIPLICACAO(A,B);
	   printf("O resultado e: %.5lf\n\n", C);
	  break;
	  case 4:
	   printf("Digite o primeiro numero:\n");
	   scanf("%lf",&A);
	   printf("Digite o segundo numero:\n");
	   scanf("%lf",&B);
	   C = FuncDIVISAO(A,B);
	   if(B == 0)
	   {
		 printf("Nao e possivel fazer uma divisao por 0!\n\n");  
	   }
	   else
	   {
		printf("O resultado e: %.5lf\n\n", C);
	   }
	  break;
	  case 5:
	   printf("Digite a base:\n");
	   scanf("%lf",&A);
	   printf("Digite o expoente:\n");
	   scanf("%lf",&B);
	   C = FuncPOTENCIACAO(A,B);
	   printf("O resultado e: %.5lf\n\n", C);
	  break;
	  case 6:
	   printf("Digite o numero a ser calculado:\n");
	   scanf("%lf",&A);
	   C = FuncRAIZ(A);
	   if(A < 0)
	   {
		   printf("Numeros negativos nao possuem Raiz Quadrada!\n\n");
	   }
	   else
	   {
	   printf("O resultado e: %lf\n\n", C);
	   }
	  break;
	  case 7:
	   printf("Digite o numero a ser calculado:\n");
	   scanf("%d",&E);
	   D = FuncFATORIAL(E);
	   printf("O resultado e: %d\n\n", D);
	  break;
	  case 10:
	   printf("Digite o primeiro numero:\n");
	   scanf("%lf",&A);
	   printf("Digite o segundo numero:\n");
	   scanf("%lf",&B);
	   printf("Digite o terceiro numero:\n");
	   scanf("%lf\n\n",&C);
	   funcEQUACAO(A,B,C);
	  break;
	  
	  default:
	       
		printf("A opcao digitada nao e valida\n");
	}  
  
   }while(ENTRADA != 0);
      
  return(0);

 
}

double FuncSOMA(double A, double B) {

 double X = 0.0;
 
  X = A + B;

 return(X);
}

double FuncSUBTRACAO(double A, double B) {

 double X = 0.0;
 
  X = A - B;

 return(X);
}

double FuncMULTIPLICACAO(double A, double B) {

 double X = 0.0;
 
  X = A * B;

 return(X);
}

double FuncDIVISAO(double A, double B) {

 double X = 0.0;
 
  X = A / B;
  
   if(B == 0)
   {
	   return(-1.0);
   }
   else
   {
       return(X);
   }
}

double FuncPOTENCIACAO(double B, int E) {

 double VAL = 1.0;
 
   for(int i = 0; i < E; i++)
 
    VAL = VAL * B;  

 return(VAL);
}

double FuncRAIZ(double A) {
	
	double Xk = 0.0;
	double B = 0.5;
	
	if(A < 0) 
	{
	 return(-1.0);
	}
	else if(A == 0)
	{
		return(0.0);
	}
	else 
	{
		Xk = A;
		
		for(int i = 0; i < 100; i++ )
		{	
			Xk = B * (Xk + (A / Xk));
		}
	
		return(Xk);
	}
	
}

int FuncFATORIAL(int A) { 

 int VAL = 1;
 
   for(int i = 0; i < A; i++) {
    
     VAL = VAL * (A - i);
   }
	return(VAL);
}

void funcEQUACAO(double A, double B, double C) {
	
	double x1 = 0.0;
	double x2 = 0.0;
	double DELTA = 0.0;
	
	
	 if(A != 0)
	 {
		DELTA = (FuncPOTENCIACAO(B,2) -4 * A * C); 
	 
	   if(DELTA >= 0)
		   {
			   x1 = ((-B) + (FuncRAIZ(DELTA))) / (2 * A);
	           x2 = ((-B) - (FuncRAIZ(DELTA))) / (2 * A);
			   printf("Os valores da Equacao de 2nd Grau serao:\n");
			   printf("X1 = %.5lf\n", x1);
			   printf("X2 = %.5lf", x2);
		   }		   
		   else
		   {
			   printf("Numeros negativos nao possuem Raiz Quadrada!");
		   }
	
	 }
}


