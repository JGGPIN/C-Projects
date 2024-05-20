#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main (void)
{
	setlocale(LC_ALL,"portuguese");
	float peso, h,pideal;
	char g;
	printf("\n Digite seu gênero 'f' para mulher ou 'h' para homem: ");
	scanf("%c",&g);
	printf("\n Digite seu peso: ");
	scanf("%f",&peso);
	printf("\n Digite sua altura: ");
	scanf("%f",&h);
	
	g = g & 0x4f;
	if (g == 'F')
		{
		pideal = (62.1 * h) - 44.7;
		printf("\n Seu peso ideal eh %.2f .",pideal);
		}
		
	else
		if (g == 'H')
			{
			pideal = (72.7 * h) - 58.0;	
			printf("\n Seu peso ideal eh %.2f .",pideal);
			}
	
}
