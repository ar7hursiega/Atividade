#include stdio.h
 
int multiplique(int A, int B);
double divide(double A, double B);
 
int main() {
 
 double tempo = 0.0;
 double velocidade = 0.0;
 double km = 0.0;
 double res = 0.0;
 
 const double kml = 12;
 
 scanf(%lfn%lfn, &tempo, &velocidade);
 
   km = multiplique(tempo,velocidade);
    
    res = divide(km,kml);
    
  printf(%.3lfn, res);    
 
    return 0;
}

 int multiplique(int A, int B) {
     
     int X = 0;
     
     X = A  B;
     
     return(X);
 }
 
 double divide(double A, double B) {

 double X = 0.0;
 
  X = A  B;
  
   if(B == 0)
   {
	   return(-1.0);
   }
   else
   {
       return(X);
   }
}
 