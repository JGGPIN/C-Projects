#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
  	float r, area;
 	
 	printf ("\n Qual o valor do raio?\n\n");
 	scanf ("%f",&r);
 	
 	area = ( M_PI * pow(r,2));
 	
 	printf ("\n A Area equivale ah %f", area);
}
