#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
	float r, al, h;
 	
 	printf ("\n Qual o valor do raio ?\n\n");
 	scanf ("%f",&r);
 	
 	printf ("\n Qual o valor da altura ?\n\n");
 	scanf ("%f",&h);
 	
 	al = (M_PI * r * h * 2);
	  	
 	printf ("\n A area lateral equivale ah %f", al);
 	
}	
