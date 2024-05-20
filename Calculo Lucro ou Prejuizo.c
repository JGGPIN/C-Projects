#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main (void)
{
	setlocale(LC_ALL,"portuguese");
	float compra=0,venda =0;
	printf("\n Digite o valor de compra: ");
	scanf("%f",&compra);
	printf("\n Digite o valor de venda: ");
	scanf("%f",&venda);
	if (venda>compra)
		printf("\n Teve Lucro. Valor de compra: %.2f , valor de venda: %.2f", compra,venda);
	else
		{
		if (venda<compra)
			printf("\n Teve prejuizo. Valor de compra: %.2f , valor de venda: %.2f", compra,venda);
		else
			printf("\n Os valores sao iguais.");
		}
}
	
	
