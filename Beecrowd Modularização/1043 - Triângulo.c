#include<stdio.h>
 
double Mod(double y);
 
int main() {
 
    double a, b, c, per, area;
    double bc;
    double ac;
    double ab;
    
    scanf("%lf %lf %lf", &a,&b,&c);

     bc = b - c;
     ac = a - c;
     ab = a - b;

    if(a < (b+c) && b < (a+c) && c < (a+b))
    {
        if(Mod(bc) < a && Mod(ac) < b && Mod(ab) < c)
        {
            per = a + b + c; 
            printf("Perimetro = %.1lf\n", per);
        }
    }
    else 
    {
            area = ((a + b) * c) / 2;
            printf("Area = %.1lf\n", area);
    }
     
    return 0;
}

double Mod(double y) {
    
    double x = 0.0;
    
    if(y < 0)
   {
      x = y * (-1);  
   }
    else
    {
      x = y;  
    }
    
    return(x);
}