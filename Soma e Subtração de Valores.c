#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
  float a, b, soma, subt;
 
 printf ("Qual o valor de a?");
 scanf ("%f", &a);
 printf ("Qual o valor de b?");
 scanf ("%f", &b);
 
 subt = a - b;
 soma = a + b;
 
 printf ("A soma dos termos eh %f", soma);
 printf ("A subtracao dos termos eh %f", subt);
}
