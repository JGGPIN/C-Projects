#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main (void)
{
	setlocale(LC_ALL,"portuguese");
	int num=0;
	printf("\n Digite um numero: ");
	scanf("%d",&num);
	if ((num%2)==0)
		printf("\n O numero eh par.");
	else
		printf("\n O numero eh impar.");
			
}
