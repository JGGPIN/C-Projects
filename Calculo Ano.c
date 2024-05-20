#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main (void)
{
	setlocale(LC_ALL,"portuguese");
	int anonc, anoatual, idade;
	printf("\n Digite o ano atual: ");
	scanf("%d",&anoatual);
	printf("\n Digite o ano do seu nascimento: ");
	scanf("%d",&anonc);
	idade = anoatual-anonc;
	if (idade > 18)
		printf("\n Voce pode votar.");
	else
		printf("\n Nao pode votar.");	

}
