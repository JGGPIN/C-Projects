#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>


void main (void)
{
	setlocale(LC_ALL,"portuguese");
	int num;
	printf("\n Digite um numero: ");
	scanf("%d",&num);
	if (num>=100)
		printf("\n Valor %d eh maior ou igual a 100.",num);
	else
		printf("\n Valor %d eh menor que 100.",num);
			
}
