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
	
	if (num>0)
		printf("\n O numero %d eh positivo e o dobro do seu valor eh %d.",num, 2*num);
	else
		if (num<0)
			printf("\n O numero %d eh negativo e o triplo do seu valor eh %d.",num, 3*num);
		else
			printf("\n O numero %d eh negativo e o triplo do seu valor eh %d.",num, 3*num);
}
