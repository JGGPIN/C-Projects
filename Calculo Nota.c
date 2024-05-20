#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 float n1,n2, m;
 
 printf ("Qual a sua primeira nota?");
 scanf ("%f", &n1);
 
 printf ("Qual a sua segunda nota?");
 scanf ("%f", &n2);
 
  m = (n1+n2)/2;
  
  printf ("Sua nota foi %f", m);
}
