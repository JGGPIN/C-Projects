#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 	float r, vl;
 	
 	printf ("\n Qual o valor do raio ?\n\n");
 	scanf ("%f",&r);
 	
 	vl = (M_PI * 3/4 * pow(r,3));
	  	
 	printf ("\n O volume equivale ah %f", vl);
}
