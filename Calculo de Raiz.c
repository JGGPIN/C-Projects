#include <stdio.h>
#include <stdlib.h>
#include <math.h>	
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 float a, b, raiz;
 
 printf ("Qual o valor de a?");
 scanf ("%f", &a);
 printf ("Qual o valor de b?");
 scanf ("%f", &b);
 
 raiz = -b/a;
 
 printf ("O valor da raiz eh %f", raiz);
 
 
}

