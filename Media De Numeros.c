#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
  float n1,n2,n3, m;
 
 printf ("Qual o primeiro numero?");
 scanf ("%f", &n1);
 
 printf ("Qual o segundo numero?");
 scanf ("%f", &n2);
 
  
 printf ("Qual o terceiro numero?");
 scanf ("%f", &n3);
 
  m = (n1+n2+n3)/3;
  
  printf ("A media dos numeros eh %f", m);
  
}
