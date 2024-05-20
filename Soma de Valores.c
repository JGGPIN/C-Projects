#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
 	float num,x,y;
 
	printf ("\nQual o valor de x?\n\n");
	scanf ("%f", &x);
	
	printf ("\nQual o valor de y?\n\n");
	scanf ("%f", &y);
	
	num=(x+y);
	
	printf ("\nOvalor total eh %f",num);
	
}
