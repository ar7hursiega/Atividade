#include <stdio.h>
#include <string.h>

int main() {
 
  char palavra1[13];
  char palavra2[9];
  char palavra3[11];
  
  //strcmp comparações
  
  int vertebrado = 42;
  int invertebrado = 42;
  int ave = 42;
  int mamifero = 42;
  int carnivoro = 42;
  int onivoro = 42;
  int herbivoro = 42;
  int inseto = 42;
  int anelideo = 42;
  int hematofago = 42;
  
  //-----------------------------------------
  
    scanf("%s", palavra1);
    scanf("%s", palavra2);
    scanf("%s", palavra3);
  
   vertebrado = strcmp(palavra1, "vertebrado");
   invertebrado = strcmp(palavra1, "invertebrado");
   
   ave = strcmp(palavra2, "ave");
   mamifero = strcmp(palavra2, "mamifero");
   inseto = strcmp(palavra2, "inseto");
   anelideo = strcmp(palavra2, "anelideo");
   
   carnivoro = strcmp(palavra3, "carnivoro");
   onivoro = strcmp(palavra3, "onivoro");
   herbivoro = strcmp(palavra3, "herbivoro");
   hematofago = strcmp(palavra3, "hematofago");
   
   if(vertebrado == 0)
  {
    if(ave == 0)
    {
        if(carnivoro == 0)
        {
            printf("aguia\n");
        }
        else if(onivoro == 0)
        {
            printf("pomba\n");   
        }
    }
    else if(mamifero == 0)
    {
        if(onivoro == 0)
        {
            printf("homem\n");
        }
        else if(herbivoro == 0)
        {
            printf("vaca\n");
        }
    }
  }
  else if(invertebrado == 0)
  {
    if(inseto == 0)
    {
        if(hematofago == 0)
        {
            printf("pulga\n");
        }
        else if(herbivoro == 0)
        {
            printf("lagarta\n");   
        }
    }
    else if(anelideo == 0)
    {
        if(hematofago == 0)
        {
            printf("sanguessuga\n");
        }
        else if(onivoro == 0)
        {
            printf("minhoca\n");
        }
    }
  }
  
    return 0;
}