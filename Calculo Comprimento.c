#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 	float c, comp;
 	
 	printf ("\n Qual o valor do raio da circunferencia?\n\n");
 	scanf ("%f",&c);
 	
 	comp = (M_PI * c * 2);
	  	
 	printf ("\n O comprimento equivale ah %f", comp);
}
