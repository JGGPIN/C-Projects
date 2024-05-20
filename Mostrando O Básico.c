#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
void main(void)

{

 setlocale(LC_ALL, "Portuguese");
 
 int a, b;
 
 printf ("Qual o valor de a?");
 scanf ("%d", a);

 printf ("Qual o valor de b?");
 scanf ("%d", b);
 
 printf ("A varialvel a equivale ah %d e a b ah %d", b , a);
 
}
