#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main (void)
{
	setlocale(LC_ALL,"portuguese");
	int v1=0, v2=0;
	printf("\n Digite o primeiro valor: ");
	scanf("%d",&v1);
	printf("\n Digite o segundo valor: ");
	scanf("%d",&v2);
	if (v1>v2)
		printf("\n O maior valor  %d.",v1);
	else
		if (v1<v2)
			printf("\n O maior valor  %d.",v2);
		else
			printf("\n  Os valores sao iguais.");
	
}
	
	
