#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main (void)
{
	setlocale(LC_ALL,"portuguese");
	float nota1,nota2, med,peso1,peso2;
	printf("\n Digite a nota 1: ");
	scanf("%f",&nota1);
	printf("\n Digite o peso da nota 1: ");
	scanf("%f",&peso1);
	printf("\n Digite a nota 2: ");
	scanf("%f",&nota2);
	printf("\n Digite o peso da nota 2: ");
	scanf("%f",&peso2);
	nota1 *=peso1;
	nota2 *=peso2;
	
	med = (nota1 + nota2)/8.0;
	printf("\n A media do aluno eh %.2f", med);
	if(med>=5.0)
		printf(", Aluno Aprovado");
	else
		printf(", Aluno Reprovado");
	
}
	
		
