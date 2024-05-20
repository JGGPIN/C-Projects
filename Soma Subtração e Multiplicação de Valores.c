#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL,"Portuguese");
	int nums,numm,mul;
	int x,y;
	printf ("\nQual o valor de x?\n\n");
	scanf ("%d",&x);
	
	printf ("\nQual o valor de y?\n\n");
	scanf ("%d",&y);
	
	nums=(x+y);	
	numm=(x-y);
	mul=(x*y);

	
	printf ("\nO valor da soma de x e y eh %d",nums);
	
	printf ("\nO valor da subtracao de x e y eh %d",numm);
	
	printf ("\nO valor da multiplicacao de x e y eh %d",mul);

	
}
